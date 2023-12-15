#include "graphicsscene.h"

GraphicsScene::GraphicsScene()
{
}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    QGraphicsScene::mouseReleaseEvent(mouseEvent);
    qDebug() <<"pos: " << mouseEvent->pos();
    qDebug() <<"scenePos: " << mouseEvent->scenePos();
    qDebug()<<"*****";
    qreal x = mouseEvent->scenePos().x();
    qreal y = mouseEvent->scenePos().y();
    qreal r = 10;
    QGraphicsEllipseItem *ellipse = new QGraphicsEllipseItem(x,y,r,r);
    this->addItem(ellipse);
    //    qDebug()<< Q_FUNC_INFO <<mouseEvent->pos();

}

void GraphicsScene::drawBackground(QPainter *painter, const QRectF &rect){

    QRect r = rect.toRect();
    int xmin  =r.left() - r.left()%mGridSize - mGridSize;
    int ymin = r.top() - r.top()%mGridSize - mGridSize;
    int xmax = r.right() - r.right()%mGridSize + mGridSize;
    int ymax = r.bottom() - r.bottom()%mGridSize + mGridSize;

    for(int x=xmin ; x <= xmax; x += mGridSize ){
        painter->drawLine(x, r.top(), x, r.bottom());
    }

    for(int y=ymin ; y <= ymax; y+= mGridSize ){
        painter->drawLine(r.left(), y, r.right(), y);
    }

}

void GraphicsScene::wheelEvent(QGraphicsSceneWheelEvent *wheelEvent)
{
    QGraphicsScene::wheelEvent(wheelEvent);
}
