#ifndef DISTINCTCOLORS_H
#define DISTINCTCOLORS_H

#include <map>

class DistinctColors {
public:
  std::map<int, std::tuple<int,int,int,int>> distinctColors;
  DistinctColors() {
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

#endif // DISTINCTCOLORS_H
