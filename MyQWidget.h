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
    painter.setRenderHint(QPainter::Antialiasing, true);
    Graph currentGraph = gg.availableGenerators[0]->generate_with_positions(10,2,200,200);
    //    Graph& currentGraph = ((ThemeWidget*)parentWidget())->currentGraph;

    int vertex_size = 20;
    for_each_e_const(currentGraph, [&](Edge e) {
      painter.setBrush(Qt::black);
      painter.setPen(Qt::black);
      Ver src = boost::source(e,currentGraph);
      Ver tgt = boost::target(e,currentGraph);
      cgtea_geometry::Point src_pos = boost::get(boost::vertex_distance, currentGraph, src);
      cgtea_geometry::Point tgt_pos = boost::get(boost::vertex_distance, currentGraph, tgt);
      src_pos = src_pos + vertex_size/2;
      tgt_pos = tgt_pos + vertex_size/2;
      painter.drawLine(src_pos.x, src_pos.y, tgt_pos.x, tgt_pos.y);
    });


    for_each_v_const(currentGraph, [&](Ver v){
      cgtea_geometry::Point pos = boost::get(boost::vertex_distance, currentGraph, v);
      QRectF rectangle(pos.x, pos.y, vertex_size, vertex_size);
      painter.setBrush(Qt::white);
      painter.setPen(Qt::black);
      painter.drawEllipse(rectangle);
      int tmp = boost::get(boost::vertex_index, currentGraph, v);
      painter.drawText(rectangle,Qt::AlignCenter,QString::number(tmp));
    });
  }
};

#endif // MYQWIDGET_H
