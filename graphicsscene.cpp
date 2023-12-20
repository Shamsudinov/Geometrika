#include "graphicsscene.h"

GraphicsScene::GraphicsScene(){

    drawingMode = eDrawingMode::DRAW_NONE;
    triangle = new Triangle();
}

GraphicsScene::~GraphicsScene(){

    delete triangle;
}

void GraphicsScene::setDrawingMode(eDrawingMode mode){

    this->drawingMode = mode;
}



void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent){

    return;
    //    qDebug() <<"pos: " << mouseEvent->pos();
    //    qDebug() <<"scenePos: " << mouseEvent->scenePos();
    //    qDebug()<<"*****";
    //    qDebug()<< Q_FUNC_INFO <<mouseEvent->pos();


    if(drawingMode == eDrawingMode::DRAW_NONE){
        return;
    }

    qreal x = mouseEvent->scenePos().x();
    qreal y = mouseEvent->scenePos().y();
    qreal r = 10;

    if(drawingMode == eDrawingMode::DRAW_TRIANGLE){

        if(points.size() < 3){

            points.push_back(QPointF(x,y));
            this->addEllipse(x-r/2,y-r/2,r,r,QPen(Qt::red),QBrush(Qt::red));

            if(points.size() == 3){

//                triangle->setPointA(points[0]);
//                triangle->setPointB(points[1]);
//                triangle->setPointC(points[2]);
//                triangle->setFlag(QGraphicsItem::GraphicsItemFlag::ItemIsMovable);
//                this->addItem(triangle);
                this->update();
            }
        }
    }

    QGraphicsScene::mouseReleaseEvent(mouseEvent);

}

void GraphicsScene::drawBackground(QPainter *painter, const QRectF &rect){

    QRect r = rect.toRect();
    int xmin  =r.left() - r.left()%mGridSize - mGridSize;
    int ymin = r.top() - r.top()%mGridSize - mGridSize;
    int xmax = r.right() - r.right()%mGridSize + mGridSize;
    int ymax = r.bottom() - r.bottom()%mGridSize + mGridSize;

    QPen pen;
    pen.setWidth(1);
    pen.setColor(QColor(0,0,0,50));
    painter->setPen(pen);

    for(int x=xmin ; x <= xmax; x += mGridSize ){
        painter->drawLine(x, r.top(), x, r.bottom());
    }

    for(int y=ymin ; y <= ymax; y+= mGridSize ){
        painter->drawLine(r.left(), y, r.right(), y);
    }

}

//void GraphicsScene::wheelEvent(QGraphicsSceneWheelEvent *wheelEvent)
//{
//    QGraphicsScene::wheelEvent(wheelEvent);
//}
