#include "mazecreatormenudialog.h"

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stdexcept>

int ribi::MazeCreatorMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 0;
  }
  return 0;
}

ribi::About ribi::MazeCreatorMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "MazeCreator",
    "creates a maze and displays it on screen",
    "the 6th of March 2012",
    "2007-2015",
    "http://www.richelbilderbeek.nl/ToolMazeCreator.htm",
    GetVersion(),
    GetVersionHistory()
  );
  return a;
}

ribi::Help ribi::MazeCreatorMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {

    },
    {

    }
  );
}

std::string ribi::MazeCreatorMenuDialog::GetVersion() const noexcept
{
  return "1.1";
}

std::vector<std::string> ribi::MazeCreatorMenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2007-xx-xx: version 1.0: initial version.",
    "2012-03-06: version 1.1: added versioning. Added menu screen."
  };
}
