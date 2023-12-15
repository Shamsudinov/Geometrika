#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QDebug>
#include <QtMath>

class GraphicsView : public QGraphicsView
{
public:
    GraphicsView();

    void wheelEvent(QWheelEvent *event);
};

#endif // GRAPHICSVIEW_H
