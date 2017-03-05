#ifndef QTMAZECREATORMENUDIALOG_H
#define QTMAZECREATORMENUDIALOG_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qthideandshowdialog.h"
#pragma GCC diagnostic pop

namespace Ui {
  class QtMazeCreatorMenuDialog;
}

namespace ribi {

class QtMazeCreatorMenuDialog : public QtHideAndShowDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit QtMazeCreatorMenuDialog(QWidget *parent = 0);
  QtMazeCreatorMenuDialog(const QtMazeCreatorMenuDialog&) = delete;
  QtMazeCreatorMenuDialog& operator=(const QtMazeCreatorMenuDialog&) = delete;
  ~QtMazeCreatorMenuDialog() noexcept;

private slots:

  void on_button_start_clicked();
  void on_button_about_clicked();
  void on_button_quit_clicked();

private:
  Ui::QtMazeCreatorMenuDialog *ui;
};

} //~namespace ribi

#endif // QTMAZECREATORMENUDIALOG_H
