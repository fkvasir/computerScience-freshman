<<<<<<< HEAD
#include <stdio.h>
#define INCHES_IN_CM 0.3937

int main()
{
  int small, large;

  printf("\nEnter smaller number: ");
  scanf("%d", &small);

  do
  {
    printf("\nEnter larger number: ");
    scanf("%d", &large);

    if (large < small)
    {
      printf("\nError: Enter number greater than smaller number\n");
    };
    if ((large - small) > 10)
    {
      printf("\nError: Numbers should have only 10 interval\n");
    };

  } while (large < small || ((large - small) > 10));

  for (int i = small; i <= large; i++)
  {
    printf("%d %f\n", i, i * INCHES_IN_CM);
  }
}
=======
#include <stdio.h>
#define INCHES_IN_CM 0.3937

int main()
{
  int small, large;

  printf("\nEnter smaller number: ");
  scanf("%d", &small);

  do
  {
    printf("\nEnter larger number: ");
    scanf("%d", &large);

    if (large < small)
    {
      printf("\nError: Enter number greater than smaller number\n");
    };
    if ((large - small) > 10)
    {
      printf("\nError: Numbers should have only 10 interval\n");
    };

  } while (large < small || ((large - small) > 10));

  for (int i = small; i <= large; i++)
  {
    printf("%d %f\n", i, i * INCHES_IN_CM);
  }
}
>>>>>>> 7f7fac2 (added changes)
