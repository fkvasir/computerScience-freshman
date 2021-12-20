#include <stdio.h>

int main()
{
  int x;
  int zero_count = 0;
  int minus_sum = 0;
  int plus_sum = 0;

  if (x < 0)
  {
    minus_sum = minus_sum + x;
  }
  else if (x > 0)
  {
    plus_sum = plus_sum + x;
  }
  else
  {
    zero_count = zero_count + 1;
  };
};
