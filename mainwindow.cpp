#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    this->resize(500,500);          // Задаем размеры виджета, то есть окна
    // Фиксируем размеры виджета
    this->setFixedSize(520,650);

    // Инициализируем графическую сцену
    scene = new GraphicsScene();

    // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setScene(scene);
    // Устанавливаем сглаживание
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    // Отключаем скроллбар по вертикали
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Отключаем скроллбар по горизонтали
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Задаем размеры graphicsView
    ui->graphicsView->resize(500,500);
    // Устанавливаем область графической сцены
    scene->setSceneRect(-250,-250,500,500);

    // Добавляем горизонтальную линию через центр
    scene->addLine(-250,0,250,0,QPen(Qt::black));
    // Добавляем вертикальную линию через центр
    scene->addLine(0,-250,0,250,QPen(Qt::black));
}

MainWindow::~MainWindow()
{
    delete ui;
}

