///
/// Developed by mrybs
///
#include "mcurses_kernel.h"

using namespace mcurses;

namespace mcurses{
class Imcurses_widget : public mcurses_kernel{
public:
  virtual void render() =0;
  virtual void show() =0;
  virtual void hide() =0;

  void cycle(){}

  int isHided = 1;
  int x, y, aspect;
};
}
