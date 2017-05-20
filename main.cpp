#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QGraphicsScene scene;
    scene.addText("Hello world");//添加文本图形项
    scene.setForegroundBrush(QColor(255,255,255,100));
    //scene.setBackgroundBrush(Qt::green);
    scene.setBackgroundBrush(QPixmap("C:/Users/LHT/Desktop/timg.jpg"));
    QGraphicsView view(&scene);
    view.show();

    return a.exec();
}
