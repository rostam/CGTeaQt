#include "CGTeaMainWindow.h"
#include <QtWidgets>

CGTeaMainWindow::CGTeaMainWindow()
{
  widget = new ThemeWidget();
  setCentralWidget(widget);
  createMenus();
  QString message = tr("A context menu is available by right-clicking");
  statusBar()->showMessage(message);

}

void CGTeaMainWindow::createMenus()
{
  auto generateMenu = menuBar()->addMenu(tr("&Generate"));
  for(auto& g : widget->graphRelatedGatherer.availableGenerators) {
      auto newAct = new QAction(tr((string("&")+g->name()).c_str()), this);
      //      newAct->setShortcuts(QKeySequence::New);
      newAct->setStatusTip(tr(g->description().c_str()));
      generateMenu->addAction(newAct);
      //  connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    }

  auto reportMenu = menuBar()->addMenu(tr("&Report"));
  for(auto& g : widget->graphRelatedGatherer.availableReports) {
      auto newAct = new QAction(tr((string("&")+g->name()).c_str()), this);
      //      newAct->setShortcuts(QKeySequence::New);
      newAct->setStatusTip(tr(g->description().c_str()));
      reportMenu->addAction(newAct);
      //  connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    }


  auto actionMenu = menuBar()->addMenu(tr("&Action"));
  for(auto& g : widget->graphRelatedGatherer.availableActions) {
      auto newAct = new QAction(tr((string("&")+g->name()).c_str()), this);
      //      newAct->setShortcuts(QKeySequence::New);
      newAct->setStatusTip(tr(g->description().c_str()));
      actionMenu->addAction(newAct);
      //  connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    }
}
