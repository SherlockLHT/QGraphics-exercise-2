#ifndef MYVIEW_H
#define MYVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QWheelEvent>
#include <QMouseEvent>
#include <QWidget>
#include <QtOpenGL>
#include <QGraphicsItemGroup>
#include <QKeyEvent>

class myView : public QGraphicsView
{
public:
    myView(QWidget*parent = NULL);

protected:
    void wheelEvent(QWheelEvent*);
    void mousePressEvent(QMouseEvent*);
    void keyPressEvent(QKeyEvent*);
};

#endif // MYVIEW_H
