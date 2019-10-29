#ifndef GRAPHRELATEDGATHERER_H
#define GRAPHRELATEDGATHERER_H

#include <vector>
#include "cgtea/generators/GeneratorInterface.h"
#include "cgtea/reports/ReportInterface.h"
#include "cgtea/actions/ActionInterface.h"

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


class GraphRelatedGatherer {
public:
  std::vector<std::unique_ptr<GeneratorInterface>> availableGenerators;
  std::vector<std::unique_ptr<ReportInterface>> availableReports;
  std::vector<std::unique_ptr<ActionInterface>> availableActions;
  std::map<int, std::tuple<int,int,int,int>> distinctColors;

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

    distinctColors[0] = std::make_tuple(255, 255, 255, 255);//white with alpha = 1
    distinctColors[1] = std::make_tuple(230, 25, 75, 150);//red
    distinctColors[2] = std::make_tuple(60, 180, 75, 150);//green
    distinctColors[3] = std::make_tuple(255, 225, 25, 150);//yellow
    distinctColors[4] = std::make_tuple(0, 130, 200, 150);//blue
    distinctColors[5] = std::make_tuple(245, 130, 49, 150);//orange
    distinctColors[6] = std::make_tuple(145, 30, 180, 150);//purple
    distinctColors[7] = std::make_tuple(70, 240, 240, 150);//cyan
    distinctColors[8] = std::make_tuple(240, 50, 230, 150);//magenta
    distinctColors[9] = std::make_tuple(240, 50, 230, 150);//lime
    distinctColors[10] = std::make_tuple(250, 190, 190, 150);//pink
    distinctColors[11] = std::make_tuple(0, 128, 128, 150);//teal
    distinctColors[12] = std::make_tuple(230, 190, 255, 150);//lavender
    distinctColors[13] = std::make_tuple(170, 110, 40, 150);//brown
    distinctColors[14] = std::make_tuple(255, 250, 200, 150);//beige
    distinctColors[15] = std::make_tuple(128, 0, 0, 150);//maroon
    distinctColors[16] = std::make_tuple(170, 255, 195, 150);//Mint
    distinctColors[17] = std::make_tuple(128, 128, 0, 150);//olive
    distinctColors[18] = std::make_tuple(255, 216, 177, 150);//Coral
    distinctColors[19] = std::make_tuple(0, 0, 128, 150);//Navy
    distinctColors[20] = std::make_tuple(128, 128, 128, 150);//Grey
  }
};

#endif // GRAPHRELATEDGATHERER_H
