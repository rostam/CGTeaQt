#ifndef POSITIONGENERATOR_H
#define POSITIONGENERATOR_H

#include "point.h"
#include <vector>
#include <cmath>

namespace position_generators {
static std::vector<cgtea_geometry::Point> circle(double w, double h, double r, unsigned int n) {
        std::vector<cgtea_geometry::Point> ret;
        for(unsigned int i=0;i < n;i++) {
            double deg = 2 * M_PI / n * i;
            ret.emplace_back( w + r*cos( deg ), h + r*sin( deg ) );
        }
        return ret;
    }
}
#endif // POSITIONGENERATOR_H
