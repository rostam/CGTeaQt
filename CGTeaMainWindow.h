#ifndef CGTEAMAINWINDOW_H
#define CGTEAMAINWINDOW_H

#include <QActionGroup>
#include <QLabel>
#include <QMainWindow>
#include "cgteaqt.h"

class CGTeaMainWindow : public QMainWindow
{
  Q_OBJECT

  ThemeWidget *widget;
public:
  CGTeaMainWindow();

private:
  void createActions();
  void createMenus();
  void report(QAction* act);
  void generate(QAction* act);
  void action(QAction* act);
  void binaryOperation(QAction* act);
};
#endif // CGTEAMAINWINDOW_H
