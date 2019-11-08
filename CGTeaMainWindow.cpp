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
      newAct->setData(QString::fromStdString(g->name()));
      //      newAct->setShortcuts(QKeySequence::New);
      newAct->setStatusTip(tr(g->description().c_str()));
      generateMenu->addAction(newAct);
    }

  auto reportMenu = menuBar()->addMenu(tr("&Report"));
  for(auto& g : widget->graphRelatedGatherer.availableReports) {
      auto newAct = new QAction(tr((string("&")+g->name()).c_str()), this);
      newAct->setData(QString::fromStdString(g->name()));
      //      newAct->setShortcuts(QKeySequence::New);
      newAct->setStatusTip(tr(g->description().c_str()));
      reportMenu->addAction(newAct);
    }
  connect(reportMenu, &QMenu::triggered, this, &CGTeaMainWindow::report);


  auto actionMenu = menuBar()->addMenu(tr("&Action"));
  for(auto& g : widget->graphRelatedGatherer.availableActions) {
      auto newAct = new QAction(tr((string("&")+g->name()).c_str()), this);
      newAct->setData(QString::fromStdString(g->name()));
      //      newAct->setShortcuts(QKeySequence::New);
      newAct->setStatusTip(tr(g->description().c_str()));
      actionMenu->addAction(newAct);
      //  connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    }
}

void CGTeaMainWindow::report(QAction* act) {
  auto& rs = widget->graphRelatedGatherer.availableReports;
  auto name = act->data().toString().toStdString();
  auto el = std::find_if(rs.begin(), rs.end(),[&name](const auto& x) {return x->name().compare(name)==0;});
  if(el != rs.end()) {
      auto res = (*el)->report(widget->currentGraph);
      cerr << "salam" << act->text().toStdString();
    }
}
