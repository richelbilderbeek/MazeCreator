#ifndef QTMAZECREATORMAINDIALOG_H
#define QTMAZECREATORMAINDIALOG_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include <boost/shared_ptr.hpp>
#include "qthideandshowdialog.h"
#pragma GCC diagnostic pop

struct QGraphicsPixmapItem;
struct QGraphicsScene;
struct QTimer;

namespace Ui {
  class QtMazeCreatorMainDialog;
}

namespace ribi {

class QtMazeCreatorMainDialog : public QtHideAndShowDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit QtMazeCreatorMainDialog(QWidget *parent = 0);
  QtMazeCreatorMainDialog(const QtMazeCreatorMainDialog&) = delete;
  QtMazeCreatorMainDialog& operator=(const QtMazeCreatorMainDialog&) = delete;
  ~QtMazeCreatorMainDialog() noexcept;

  //From http://www.richelbilderbeek.nl/CppCreateMaze.htm
  static const std::vector<std::vector<int> > CreateMaze(const int size);

private:
  Ui::QtMazeCreatorMainDialog *ui;
  boost::shared_ptr<QGraphicsScene> m_scene;
  boost::shared_ptr<QGraphicsPixmapItem> m_background;
  boost::shared_ptr<QTimer> m_timer;

  std::size_t m_maze_sz;
  double m_rotation;


  void resizeEvent(QResizeEvent*);
  void keyPressEvent(QKeyEvent* event);
  void drawMaze();

private slots:
  void onTimer();

};

} //~namespace ribi


#endif // QTMAZECREATORMAINDIALOG_H
