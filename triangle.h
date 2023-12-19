#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QGraphicsItem>
#include <QPoint>
#include <QPainter>

class Triangle : public QGraphicsItem
{
    QPointF A , B , C;
    QLineF AB, BC, CA;

public:
    Triangle();
    Triangle(QPoint A,QPoint B,QPoint C);
    ~Triangle();
    void setPointA(const QPointF &A);
    void setPointB(const QPointF &B);
    void setPointC(const QPointF &C);
    QPointF getPointA() const;
    QPointF getPointB() const;
    QPointF getPointC() const;

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // TRIANGLE_H
