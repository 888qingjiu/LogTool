cmake_minimum_required(VERSION 3.16)

project(LogTool VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Core Network)
find_package(Qt5 COMPONENTS Core Gui Widgets Network REQUIRED)
#find_package(Qt6 REQUIRED COMPONENTS Core Network)
set(QT_VERSION_MAJOR 5)
# 添加QSsh头文件路径
include_directories(${CMAKE_SOURCE_DIR}/qssh/include)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        CConnectionForSshClient.cpp
        CConnectionForSshClient.h
)

if(QT_VERSION_MAJOR GREATER 5)
    qt_add_executable(LogTool
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        CConnectionForSshClient.h
        CConnectionForSshClient.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET LogTool APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(LogTool SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(LogTool
            ${PROJECT_SOURCES}
        )
    endif()
endif()
#target_link_libraries(LogTool PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt5::Network)
target_link_libraries(LogTool PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Network
    # 链接QSsh库
    ${CMAKE_CURRENT_SOURCE_DIR}/qssh/lib/libQSsh.so.1.0.0
)


# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set(QT_VERSION 5.12.8)
#if(${QT_VERSION} VERSION_LESS 6.1.0)
#  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.LogTool)
#endif()
set_target_properties(LogTool PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS LogTool
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR GREATER 5)
    qt_finalize_executable(LogTool)
endif()



# Find the Qt5 package, specify the components you need, e.g., Core, Gui, Widgets, etc.
#find_package(Qt5 COMPONENTS Core Gui Widgets Network REQUIRED)
