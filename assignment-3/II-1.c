<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main()
{
  int i, k = 1, nTerms = 5;

  for (i = 1; i <= nTerms; i++)
  {
    printf("%2d %2d\n", i - 1, k);
    k = k * 2;
  }

  return 0;
  // or
  int index = 0;

  for (int i = 1; i <= 16; i = i * 2)
  {
    printf("%2d %2d\n", index, i);
    ++index;
  }
}
=======
#include <stdio.h>
#include <math.h>

int main()
{
  int i, k = 1, nTerms = 5;

  for (i = 1; i <= nTerms; i++)
  {
    printf("%2d %2d\n", i - 1, k);
    k = k * 2;
  }

  return 0;
  // or
  int index = 0;

  for (int i = 1; i <= 16; i = i * 2)
  {
    printf("%2d %2d\n", index, i);
    ++index;
  }
}
>>>>>>> 7f7fac2 (added changes)
