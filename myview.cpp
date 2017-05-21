#include "myview.h"

myView::myView(QWidget *parent):
    QGraphicsView(parent)
{
    resize(400,400);
    setBackgroundBrush(Qt::blue);
    QGraphicsScene* scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,200,200);
    QGraphicsRectItem* item = new QGraphicsRectItem(0,0,20,20);
    item->setBrush(Qt::red);
    scene->addItem(item);
    setScene(scene);
    setAlignment(Qt::AlignLeft | Qt::AlignTop);
}

void myView::wheelEvent(QWheelEvent *event)
{
    if(event->delta() >0 )//滚轮远离使用者，则为正
    {
        scale(0.5,0.5); //视图缩放
    }
    else
    {
        scale(2,2);
    }
}

void myView::mousePressEvent(QMouseEvent *event)
{
    rotate(90); //视图顺时针旋转90度
}
