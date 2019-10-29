/**
 * Created by rostami on 28.06.17.
*/
#ifndef EXACT_COLORING_GENERALIZEDPETERSONGENERATOR_H
#define EXACT_COLORING_GENERALIZEDPETERSONGENERATOR_H

#include "GeneratorInterface.h"

class GeneralizedPeterson : public GeneratorInterface {
public:
    explicit GeneralizedPeterson() : GeneratorInterface() {};
     Graph generate(unsigned int n, unsigned int k) override {
        Graph g;
        int counter = 0;
        for (int i = 0; i < n; i++) {
            add_edge((i % n), ((i + 1) % n),g);
            add_edge((i % n), ((i + n) % (2 * n)),g);
            if (i + n + k > 2 * n - 1)
                add_edge(((i + n) % (2 * n)), ((i + n + k) % (2 * n)) + n,g);
            else
                add_edge(((i + n) % (2 * n)), ((i + n + k) % (2 * n)),g);
        }
        return g;
    }

     Graph generate_with_positions(unsigned int n, unsigned int k, double width, double height) override {
       return Graph();
     }

     string name() override {
        return "Generalized Peterson";
     }

     string description() override {
       return "Generalized Peterson";
     }
};

#endif //EXACT_COLORING_GENERALIZEDPETERSONGENERATOR_H
