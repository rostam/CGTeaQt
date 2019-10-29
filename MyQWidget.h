#ifndef MYQWIDGET_H
#define MYQWIDGET_H

#include <QPainter>
#include <qwidget.h>
#include "cgtea/datatypes.h"
#include "cgteaqt.h"


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
    ((ThemeWidget*)parentWidget())->currentGraph;

    QRectF rectangle(100.0, 100.0, 50.0, 50.0);
    QPainter painter(this);
    painter.setBrush(Qt::white);
    painter.setPen(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.drawEllipse(rectangle);
    painter.drawText(rectangle,Qt::AlignCenter,"text");
  }
};

#endif // MYQWIDGET_H
