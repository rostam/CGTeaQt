#ifndef UNION_H
#define UNION_H

#include "BinaryOperationInterface.h"

class Union : public BinaryOperationInterface {
  virtual Graph operate(Graph g1, Graph g2) {
      int num_g1 = boost::num_vertices(g1);
      for_each_e(g2, [&](Edge e){
         boost::add_edge(e.m_source + num_g1, e.m_target + num_g1, g1);
      });
      return g1;
  }

  virtual string name() {return "Union";};
  virtual string description() {return "Union";};
};

#endif // UNION_H
