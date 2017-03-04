#ifndef MAZECREATORMENUDIALOG_H
#define MAZECREATORMENUDIALOG_H

#include <string>
#include <vector>

#include "about.h"
#include "menudialog.h"

namespace ribi {

///MazeCreatorMenuDialog contains the MazeCreator menu dialog
struct MazeCreatorMenuDialog final : public MenuDialog
{
  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;

  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;

  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;
};

} //~namespace ribi

#endif // MAZECREATORMENUDIALOG_H
