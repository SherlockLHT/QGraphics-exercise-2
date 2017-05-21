#include "myview.h"

myView::myView(QWidget *parent):
    QGraphicsView(parent)
{
    resize(400,400);
    setBackgroundBrush(Qt::blue);
    QGraphicsScene* scene = new QGraphicsScene(this);
    //scene->setSceneRect(0,0,800,800);

    QGraphicsRectItem* item = new QGraphicsRectItem(0,0,20,20);
    item->setBrush(Qt::red);
    //scene->addItem(item);

    QGraphicsRectItem* item_2 = new QGraphicsRectItem(0,0,20,20);
    item_2->setBrush(Qt::green);
    item->setPos(30,0);
    scene->addItem(item_2);

    QGraphicsItemGroup* group = new QGraphicsItemGroup;//新建图形项组
    group->addToGroup(item);
    group->addToGroup(item_2);

    scene->addItem(group);

    setScene(scene);
    qDebug()<<"ItemAt(10,0):"<<itemAt(10,0);
    qDebug()<<"ItemAt(30,0):"<<itemAt(30,0);
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
    QGraphicsView::mousePressEvent(event);//执行默认事件，可拖动
}

void myView::keyPressEvent(QKeyEvent *event)
{
    items().at(2)->setPos(100,100);
    QGraphicsView::keyPressEvent(event);//执行默认事件处理
}
