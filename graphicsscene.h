#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QDebug>

typedef enum{

    DRAW_NONE,
    DRAW_TRIANGLE,
    DRAW_RECTANGLE,
    DRAW_POLYGON,
    DRAW_CIRCLE,

} eDrawingMode;

class GraphicsScene : public QGraphicsScene
{
    int mGridSize = 20;
    eDrawingMode drawingMode;
public:
    GraphicsScene();

    void setDrawingMode(eDrawingMode mode);

    void mouseReleaseEvent(QGraphicsSceneMouseEvent * mouseEvent) override;
    void drawBackground(QPainter *painter, const QRectF &rect) override;
//    void wheelEvent(QGraphicsSceneWheelEvent *wheelEvent) override;
};

#endif // GRAPHICSSCENE_H
