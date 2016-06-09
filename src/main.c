#include "modules/foo.h"
#include <assert.h>

int main(int argc, char ** argv)
{
  int r = foo(argc, argv);
  assert(r==0);
  return r;
}
