#ifndef __LIST_CHOOSER__
#define __LIST_CHOOSER__

#include <vector>
#include <string>
#include "curses-menu.h"

using std::string;
using std::vector;

class ListChooser {
 public:
  static string GetChoiceWithOptions(const vector<string>& choices,
                                     const string& message,
                                     int fg_color,
                                     int bg_color,
                                     int xloc,
                                     int yloc,
                                     bool border,
                                     string mark);

  static bool GetYesNo(const string& message, bool default_yes);

  static string GetChoice(const vector<string>& choices);
};

#endif
