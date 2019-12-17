//
// Created by rostam on 17.11.19.
//

#ifndef CGTEA_BINARYOPERATIONINTERFACE_H
#define CGTEA_BINARYOPERATIONINTERFACE_H

#include "../datatypes.h"

class BinaryOperationInterface {
public:
    virtual Graph operate(Graph g1, Graph g2) {
        return g1;
    }

    virtual string name() {return "Binary Operation Interface";};
    virtual string description() {return "Binary Operation Interface";};
};

#endif //CGTEA_ACTIONINTERFACE_H
