/**
 * Created by rostami on 28.06.17.
 */
#ifndef EXACT_COLORING_CYCLE_H
#define EXACT_COLORING_CYCLE_H

#include "GeneratorInterface.h"

class Cycle : public GeneratorInterface {
public:
    explicit Cycle() : GeneratorInterface() {};

    Graph generate(unsigned int n, unsigned int k) override {
        Graph g;
        for (unsigned int i = 0; i < n; i++)
            add_edge(i, ((i + 1) % n), g);
        return g;
    }

    Graph generate_with_positions(unsigned int n, unsigned int k, const cgtea_geometry::Point& loc, cgtea_geometry::Point size) override {
        Graph g = generate(n, k);
        std::vector<cgtea_geometry::Point> pos = position_generators::circle(loc.x, loc.y, size.x/2, n);
        int i = 0;
        for_each_v(g, [&](Ver v) {
            boost::put(boost::vertex_distance, g, v, pos[i]);
            i++;
        });
        return g;
    }

    string name() override {
        return "Cycle";
    }

    string description() override {
        return "Generates a cycle graph.";
    }
};


#endif
