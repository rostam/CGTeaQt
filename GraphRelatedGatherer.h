#ifndef GRAPHRELATEDGATHERER_H
#define GRAPHRELATEDGATHERER_H

#include <vector>
#include "cgtea/generators/GeneratorInterface.h"
#include "cgtea/reports/ReportInterface.h"
#include "cgtea/actions/ActionInterface.h"
#include "cgtea/binaryoperations/BinaryOperationInterface.h"

#include "cgtea/reports/MaxDegree.h"
#include "cgtea/reports/MaxEigenValue.h"
#include "cgtea/reports/MinEigenValue.h"
#include "cgtea/reports/NumOfEdges.h"
#include "cgtea/reports/NumOfVertices.h"
#include "cgtea/reports/SumEigenValues.h"

#include "cgtea/generators/Antiprism.h"
#include "cgtea/generators/Banana.h"
#include "cgtea/generators/Complete.h"
#include "cgtea/generators/Cycle.h"
#include "cgtea/generators/GeneralizedPeterson.h"
#include "cgtea/generators/Prism.h"
#include "cgtea/generators/Regular.h"
#include "cgtea/generators/Star.h"
#include "cgtea/generators/point.h"
#include "cgtea/generators/compute_force_directed.h"

#include "cgtea/actions/Coloring.h"

#include "cgtea/binaryoperations/union.h"


class GraphRelatedGatherer {
public:
  std::vector<std::unique_ptr<GeneratorInterface>> availableGenerators;
  std::vector<std::unique_ptr<ReportInterface>> availableReports;
  std::vector<std::unique_ptr<ActionInterface>> availableActions;
  std::vector<std::unique_ptr<BinaryOperationInterface>> availableBinaryOperations;


  GraphRelatedGatherer() {
    availableGenerators.emplace_back(std::make_unique<Cycle>());
    availableGenerators.emplace_back(std::make_unique<Banana>());
    availableGenerators.emplace_back(std::make_unique<Complete>());
    availableGenerators.emplace_back(std::make_unique<Prism>());
    availableGenerators.emplace_back(std::make_unique<Antiprism>());
    availableGenerators.emplace_back(std::make_unique<Regular>());

    availableReports.emplace_back(std::make_unique<NumOfVertices>());
    availableReports.emplace_back(std::make_unique<NumOfEdges>());
    availableReports.emplace_back(std::make_unique<MaxDegree>());
    availableReports.emplace_back(std::make_unique<MaxEigenValue>());
    availableReports.emplace_back(std::make_unique<MinEigenValue>());
    availableReports.emplace_back(std::make_unique<SumEigenValues>());

    availableActions.emplace_back(std::make_unique<Coloring>());

    availableBinaryOperations.emplace_back(std::make_unique<Union>());
  }
};

#endif // GRAPHRELATEDGATHERER_H
