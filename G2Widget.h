#ifndef G2QWIDGET_H
#define G2QWIDGET_H

#include <QPainter>
#include <qwidget.h>
#include "cgtea/datatypes.h"
#include "GraphRelatedGatherer.h"
#include "DistinctColors.h"

class G2Widget: public QWidget {
public:
  DistinctColors dc;
  Graph currentGraph;
  G2Widget() {
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);
  }
protected:
  void paintEvent(QPaintEvent *event) override {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    int vertex_size = 30;
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
      int color =  boost::get(vertex_color, currentGraph,v);
      tuple<int,int,int,int> t = dc.distinctColors[color];
      QColor qcolor(get<0>(t), get<1>(t), get<2>(t), get<3>(t));
      cgtea_geometry::Point pos = boost::get(boost::vertex_distance, currentGraph, v);
      QRectF rectangle(pos.x, pos.y, vertex_size, vertex_size);
      painter.setPen(Qt::black);
      painter.setBrush(Qt::white);
      painter.drawEllipse(rectangle);
      painter.setBrush(qcolor);
      painter.drawEllipse(rectangle);
      int tmp = boost::get(boost::vertex_index, currentGraph, v);
      painter.drawText(rectangle,Qt::AlignCenter,QString::number(tmp));
    });
  }
};

#endif // G2QWIDGET_H
