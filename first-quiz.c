#include <stdio.h>
int foo()
{
  int i, x = 735, y = 252;
  while (i != 0)
  {
    i = x % y;
    i %= y;
    if (i == 0)
    {
      return y;
    }
  }
}
