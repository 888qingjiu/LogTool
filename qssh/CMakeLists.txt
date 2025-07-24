project(qssh)

cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)

SET(QT5_MODULES Widgets Network Core Gui)
find_package(Qt5 COMPONENTS ${QT5_MODULES} REQUIRED)

include_directories(
        ${Qt5Core_INCLUDE_DIRS}
        ${Qt5Widgets_INCLUDE_DIRS}
        ${Qt5Gui_INCLUDE_DIRS}
        ${Qt5Network_INCLUDE_DIRS}
        src/3rdparty
        ${CMAKE_BINARY_DIR}
)

file(GLOB_RECURSE QSSH_SRC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        src/*.cpp
        include/*.cpp
)

file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        FOLLOW_SYMLINKS
        sshconnectionmanager.h
)

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} src/*.ui)
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} resources/*.qrc)
# file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS src/*.cpp include/*.cpp)


QT5_WRAP_CPP(QT_MOC_HPP ${QT_MOC})
QT5_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})

message("=++++++++++++++${QT_MOC_HPP}")
#QT5_ADD_RESOURCES(QT_RESOURCES_CPP ${QSSH_SRC})



add_library(qssh SHARED
    ${QSSH_SRC}
    ${QT_FORMS_HPP}
    ${QT_MOC_HPP}
)

target_link_libraries(qssh
        Qt5::Core
        Qt5::Gui
        Qt5::Network
        Qt5::Widgets
)


set_target_properties(qssh PROPERTIES
    VERSION 1.0.0  # 设置库的版本号
    SOVERSION 1    # 设置库的 API 版本号
)