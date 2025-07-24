#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "CConnectionForSshClient.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_connect_clicked();

public slots:
    void slotConnectStateChanged(bool bConnected, QString ip, int port);

private:
    Ui::MainWindow *ui;

   // QLabel *lb_LabelState;
    std::shared_ptr<CConnectionForSshClient> m_sshSocket;
};
#endif // MAINWINDOW_H
