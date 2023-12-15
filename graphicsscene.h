#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QDebug>

class GraphicsScene : public QGraphicsScene
{
    int mGridSize = 20;
public:
    GraphicsScene();

    void mouseReleaseEvent(QGraphicsSceneMouseEvent * mouseEvent) override;
    void drawBackground(QPainter *painter, const QRectF &rect) override;
//    void wheelEvent(QGraphicsSceneWheelEvent *wheelEvent) override;
};

#endif // GRAPHICSSCENE_H
