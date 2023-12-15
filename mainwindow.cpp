#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    drawModes.push_back(ui->drawModeNone);
    drawModes.push_back(ui->drawModeTriangle);
    drawModes.push_back(ui->drawModeRectangle);
    drawModes.push_back(ui->drawModePolygon);
    drawModes.push_back(ui->drawModeCircle);

    for(int drawModeIndex = 0; drawModeIndex < drawModes.size(); drawModeIndex++)
        connect(drawModes[drawModeIndex],&QRadioButton::clicked,this,&MainWindow::test);

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

void MainWindow::test()
{

    for(int drawModeIndex = 0; drawModeIndex < drawModes.size(); drawModeIndex++){
        if(drawModes[drawModeIndex]->isChecked()){
            scene->setDrawingMode(static_cast<eDrawingMode>(drawModeIndex));
        }
    }
}
