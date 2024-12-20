#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QPixmap>
#include <QDebug>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Button Clicked!");
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key pressed:" << event->key();
    if (event->key() == Qt::Key_W) {
        QString imagePath = "C:/Users/iamgo/OneDrive/文件/caR/image/pic_4.jpg";
        if (!QFile::exists(imagePath)) {
            qDebug() << "Image file does not exist.";
            return;
        }
        QPixmap pixmap(imagePath); // 使用絕對路徑
        if (pixmap.isNull()) {
            qDebug() << "Failed to load image.";
        } else {
            ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
            qDebug() << "Image displayed.";
        }
    }
}
