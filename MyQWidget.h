#ifndef MYQWIDGET_H
#define MYQWIDGET_H

#include <QPainter>
#include <qwidget.h>
#include "cgtea/datatypes.h"
#include "cgteaqt.h"
#include "GraphRelatedGatherer.h"


class MyQWidget: public QWidget {
public:
  GraphRelatedGatherer gg;
  MyQWidget() {
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);
  }
protected:
  void paintEvent(QPaintEvent *event) override {
    QPainter painter(this);
    Graph currentGraph = gg.availableGenerators[0]->generate_with_positions(10,2,300,300);
//    Graph& currentGraph = ((ThemeWidget*)parentWidget())->currentGraph;

    for_each_v_const(currentGraph, [&](Ver v){
      QRectF rectangle(100.0, 100.0, 50.0, 50.0);
      painter.setBrush(Qt::white);
      painter.setPen(Qt::black);
      painter.setRenderHint(QPainter::Antialiasing, true);
      painter.drawEllipse(rectangle);
      painter.drawText(rectangle,Qt::AlignCenter,"text");
    });
  }
};

#endif // MYQWIDGET_H
