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
    view = new GraphicsView();
    // Устанавливаем графическую сцену в graphicsView
    view->setScene(scene);
    // Устанавливаем сглаживание
    view->setRenderHint(QPainter::Antialiasing);
    // Отключаем скроллбар по вертикали
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Отключаем скроллбар по горизонтали
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Задаем размеры graphicsView
    view->resize(500,500);
    // Устанавливаем область графической сцены
    scene->setSceneRect(-250,-250,500,500);
    ui->gridLayout->addWidget(view);

}

MainWindow::~MainWindow()
{
    delete ui;
}

