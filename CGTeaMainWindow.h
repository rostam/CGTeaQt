#ifndef CGTEAMAINWINDOW_H
#define CGTEAMAINWINDOW_H

#include <QMainWindow>
#include "cgteaqt.h"

class CGTeaMainWindow : public QMainWindow
{
  Q_OBJECT

  ThemeWidget *widget;
public:
  CGTeaMainWindow()
  {
    widget = new ThemeWidget();
    setCentralWidget(widget);
  }

  void createMenus()
  {
    //    for(auto& gi : widget->graphRelatedGatherer.availableGenerators) {

    //    }
  }
};
#endif // CGTEAMAINWINDOW_H
