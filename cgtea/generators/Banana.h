//
// Created by rostam on 09.10.19.
//

#ifndef CGTEA_BANANA_H
#define CGTEA_BANANA_H

#include "GeneratorInterface.h"

class Banana : public GeneratorInterface {
public:
    explicit Banana() : GeneratorInterface() {};

    Graph generate(unsigned int n, unsigned int k) override {
        Graph g;

        for (int i = 1; i <= n; i++)
            add_edge(0, i, g);

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < k; j++) {
                add_edge(i + 1, n + (k-1) * i + j, g);
            }
        }
        return g;
    }

    Graph generate_with_positions(unsigned int n, unsigned int k, double width, double height) override {
        Graph g = generate(n, k);
        std::vector<cgtea_geometry::Point> pos = position_generators::circle(width, height, width/2, n);
        for(int i=0;i<n;i++) {
            std::vector<cgtea_geometry::Point> pos2 = position_generators::circle(pos[i].x, pos[i].y, width/4, k-1);
            pos.insert(pos.end(), pos2.begin(), pos2.end());
        }
        pos.insert(pos.begin(), cgtea_geometry::Point(width,height));

        int i = 0;
        for_each_v(g, [&](Ver v) {
            boost::put(boost::vertex_distance, g, v, pos[i]);
            i++;
        });
        return g;
    }

    string name() override {
        return "Banana Graph";
    }

    string description() override {
        return "Generates a banana graph.";
    }
};


#endif //CGTEA_BANANA_H
