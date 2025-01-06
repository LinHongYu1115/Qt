#include "mainwindow.h"
#include "ui_mainwindow.h" // 確保包含了這個文件
#include <QKeyEvent>
#include <QPixmap>
#include <QDebug>
#include <QFile>
#include <QMediaPlayer> // 添加 QMediaPlayer 頭文件
#include <QAudioOutput> // 添加 QAudioOutput 頭文件
#include <QUrl>
#include <QTimer> // 添加 QTimer 頭文件
#include <QStringList> // 添加 QStringList 頭文件

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 設置初始圖片為 wait.png
    QPixmap pixmap(":/image/wait.png");
    ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key pressed:" << event->key(); // 添加調試輸出
    keySequence.append(QKeySequence(event->key()).toString()); // 記錄按鍵
    qDebug() << "Key sequence:" << keySequence.join(", "); // 輸出按鍵序列

    QString imagePath = ":/image/wait.png"; // 默認顯示 wait.png
    if (event->key() == Qt::Key_W) {
        qDebug() << "W key pressed"; // 添加調試輸出
        imagePath = ":/image/catW.png"; // 使用新的資源路徑
    } else if (event->key() == Qt::Key_A) {
        qDebug() << "A key pressed"; // 添加調試輸出
        imagePath = ":/image/catA.png"; // 使用新的資源路徑
    } else if (event->key() == Qt::Key_S) {
        qDebug() << "S key pressed"; // 添加調試輸出
        imagePath = ":/image/catS.png"; // 使用新的資源路徑
    } else if (event->key() == Qt::Key_D) {
        qDebug() << "D key pressed"; // 添加調試輸出
        imagePath = ":/image/catD.png"; // 使用新的資源路徑
    } else if (event->key() == Qt::Key_P) {
        qDebug() << "P key pressed"; // 添加調試輸出
        QMediaPlayer *player = new QMediaPlayer(this);
        QAudioOutput *audioOutput = new QAudioOutput(this);
        player->setAudioOutput(audioOutput);
        player->setSource(QUrl("qrc:/image/pipefalling-sound.mp3")); // 使用資源路徑
        audioOutput->setVolume(0.5);
        player->play();
        imagePath = ":/image/metalpipe.png"; // 顯示 metal pipe 圖片
    } else if (event->key() == Qt::Key_C) {
        qDebug() << "C key pressed"; // 添加調試輸出
        QMediaPlayer *player = new QMediaPlayer(this);
        QAudioOutput *audioOutput = new QAudioOutput(this);
        player->setAudioOutput(audioOutput);
        player->setSource(QUrl("qrc:/image/sounds_cowbell.mp3")); // 使用資源路徑
        audioOutput->setVolume(0.5);
        player->play();
        imagePath = ":/image/cowbell.png"; // 顯示 cowbell 圖片
    } else if (event->key() == Qt::Key_R) {
        qDebug() << "R key pressed"; // 添加調試輸出
        QMediaPlayer *player = new QMediaPlayer(this);
        QAudioOutput *audioOutput = new QAudioOutput(this);
        player->setAudioOutput(audioOutput);
        player->setSource(QUrl("qrc:/image/sounds_cymbal.mp3")); // 使用資源路徑
        audioOutput->setVolume(0.5);
        player->play();
        imagePath = ":/image/cymbal.png"; // 顯示 cymbal 圖片
    }

    QPixmap pixmap(imagePath);
    if (pixmap.isNull()) {
        qDebug() << "Failed to load image.";
    } else {
        ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        qDebug() << "Image displayed.";
    }

    // 設置定時器在1秒後恢復原始圖片
    QTimer::singleShot(1000, this, [this]() {
        QPixmap pixmap(":/image/wait.png");
        ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        qDebug() << "Reverted to original image.";
    });
}
