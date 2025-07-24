#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lb_LabelState->setText("未连接");
    ui->lb_LabelState->setStyleSheet("color: red;");
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::createConnection()
{
    QString strIp = ui->m_pComBoxIp->currentText();
    QString strUser = ui->m_pComBoxUser->currentText();
    QString strPwd = ui->m_pLineEditPwd->text();
    m_sshSocket = std::make_shared<CConnectionForSshClient>(strIp, 22, strPwd, strUser);
    m_sshSocket->init();
    connect(m_sshSocket.get(), SIGNAL(sigConnectStateChanged(bool, QString, int)),
            this, SLOT(slotConnectStateChanged(bool, QString, int)));
    connect(m_sshSocket.get(), SIGNAL(sigDataArrived(QString, QString, int)),
            this, SLOT(slotDataArrived(QString, QString, int)));
    connect(this, SIGNAL(sigSend(QString)), m_sshSocket.get(), SLOT(slotSend(QString)));
    connect(this, SIGNAL(sigDisconnected()), m_sshSocket.get(), SLOT(slotDisconnected()));
    // QString initCmd = "export LANG=C.UTF-8;\n";
    // emit sigSend(initCmd); // 发送环境变量设置
}
*/

void MainWindow::on_btn_connect_clicked()
{
    QString strIp = "172.20.1.22";
    QString strUser = "nvidia";      // 服务器用户名
    QString strPwd = "nvidia";       // 服务器密码
    m_sshSocket = std::make_shared<CConnectionForSshClient>(strIp, 22, strPwd, strUser);
    m_sshSocket->init();
    connect(m_sshSocket.get(), SIGNAL(sigConnectStateChanged(bool, QString, int)),
            this, SLOT(slotConnectStateChanged(bool, QString, int)));
    connect(m_sshSocket.get(), SIGNAL(sigDataArrived(QString, QString, int)),
            this, SLOT(slotDataArrived(QString, QString, int)));
    connect(this, SIGNAL(sigSend(QString)), m_sshSocket.get(), SLOT(slotSend(QString)));
    connect(this, SIGNAL(sigDisconnected()), m_sshSocket.get(), SLOT(slotDisconnected()));

}

void MainWindow::slotConnectStateChanged(bool bConnected, QString ip, int port)
{
    if (bConnected && ip == "172.20.1.22") {
        ui->lb_LabelState->setText("已连接");
        ui->lb_LabelState->setStyleSheet("color: green;");
    } else {
        ui->lb_LabelState->setText("未连接");
        ui->lb_LabelState->setStyleSheet("color: red;");
    }
}

