#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qtmazecreatormenudialog.h"

#include "mazecreatormenudialog.h"
#include "qtaboutdialog.h"
#include "qtmazecreatormaindialog.h"
#include "ui_qtmazecreatormenudialog.h"
#pragma GCC diagnostic pop

ribi::QtMazeCreatorMenuDialog::QtMazeCreatorMenuDialog(QWidget *parent) :
  QtHideAndShowDialog(parent),
  ui(new Ui::QtMazeCreatorMenuDialog)
{
  ui->setupUi(this);
}

ribi::QtMazeCreatorMenuDialog::~QtMazeCreatorMenuDialog() noexcept
{
  delete ui;
}

void ribi::QtMazeCreatorMenuDialog::on_button_start_clicked()
{
  QtMazeCreatorMainDialog d;
  this->ShowChild(&d);
}

void ribi::QtMazeCreatorMenuDialog::on_button_about_clicked()
{
  this->hide();
  About a = MazeCreatorMenuDialog().GetAbout();
  //a.AddLibrary("QtDialWidget version: " + QtDialWidget::GetVersion());
  QtAboutDialog d(a);
  this->ShowChild(&d);
}

void ribi::QtMazeCreatorMenuDialog::on_button_quit_clicked()
{
  close();
}
