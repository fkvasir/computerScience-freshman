<<<<<<< HEAD
#include <stdio.h>
int main()

{
  int i, j;

  printf(" i j\n");

  for (i = 1; i < 4; ++i)
  {
    printf("Outer %3d\n", i);
    for (j = 0; j < i; ++j)
    {
      printf("Inner %11d\n", j);
    }
  }
=======
#include <stdio.h>
int main()

{
  int i, j;

  printf(" i j\n");

  for (i = 1; i < 4; ++i)
  {
    printf("Outer %3d\n", i);
    for (j = 0; j < i; ++j)
    {
      printf("Inner %11d\n", j);
    }
  }
>>>>>>> 7f7fac2 (added changes)
}