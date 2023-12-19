#include "triangle.h"

Triangle::Triangle()
{

}

Triangle::Triangle(QPoint A, QPoint B, QPoint C){

    this->A = A;
    this->B = B;
    this->C = C;

    this->AB.setP1(A);
    this->AB.setP2(B);

    this->BC.setP1(B);
    this->BC.setP2(C);

    this->CA.setP1(C);
    this->CA.setP2(A);
}

Triangle::~Triangle()
{

}

void Triangle::setPointA(const QPointF &A){

    this->A = A;
    this->AB.setP1(A);
    this->CA.setP2(A);
}

void Triangle::setPointB(const QPointF &B){

    this->B = B;
    this->AB.setP2(B);
    this->BC.setP1(B);
}

void Triangle::setPointC(const QPointF &C){

    this->C = C;
    this->BC.setP2(C);
    this->CA.setP1(C);
}

QPointF Triangle::getPointA() const{

    return A;
}

QPointF Triangle::getPointB() const{

    return B;
}

QPointF Triangle::getPointC() const{

    return C;
}

QRectF Triangle::boundingRect() const
{
    return QRectF();
}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

//    QPolygon polygon;
//    polygon << QPoint(0,-40) << QPoint(25,40) << QPoint(-25,40);
//    painter->setBrush(Qt::red);
//    painter->drawPolygon(polygon);
//    Q_UNUSED(option);
//    Q_UNUSED(widget);

    painter->setBrush(Qt::red);
    painter->drawLine(AB);
    painter->drawLine(BC);
    painter->drawLine(CA);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

































