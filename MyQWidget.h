#ifndef MYQWIDGET_H
#define MYQWIDGET_H

#include <QPainter>
#include <qwidget.h>


class MyQWidget: public QWidget {
public:
  MyQWidget() {
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);
  }
protected:
  void paintEvent(QPaintEvent *event) override {
    QRectF rectangle(10.0, 20.0, 60.0, 60.0);
    QPainter painter(this);
    painter.setBrush(Qt::white);
    painter.setPen(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.drawEllipse(QPoint(100,100), 50, 50);
    painter.drawText(QPoint(100,100),QString("test"));
  }
};

#endif // MYQWIDGET_H
