#include <stdio.h>

int main()
{
  int y, x;

  if ((x - y) > 0)
  {
    y = x - y;
  }
  else if ((y - x) > 0)
  {
    y = y - x;
  }
  else
  {
    return "error";
  }
};
