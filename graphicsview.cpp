#include "graphicsview.h"

GraphicsView::GraphicsView()
{

}
void GraphicsView::wheelEvent(QWheelEvent *event){

    double angle = event->angleDelta().y();
    double factor = qPow(1.0015, angle);

    auto targetViewportPos = event->pos();
    auto targetScenePos = mapToScene(targetViewportPos);

    scale(factor, factor);
    centerOn(targetScenePos);
    QPointF deltaViewportPos = targetViewportPos - QPointF(viewport()->width() / 2.0, viewport()->height() / 2.0);
    QPointF viewportCenter = mapFromScene(targetScenePos) - deltaViewportPos;
    centerOn(mapToScene(viewportCenter.toPoint()));

}
