<<<<<<< HEAD
#include <stdio.h>
int main()
{
  int product, count, x;

  printf("Enter an integer >");
  scanf("%d", &x);
  product = x;
  count = 0;
  while (count < 4)
  {
    printf("%d\n", product);
    product *= x;
    count += 1;
  }
=======
#include <stdio.h>
int main()
{
  int product, count, x;

  printf("Enter an integer >");
  scanf("%d", &x);
  product = x;
  count = 0;
  while (count < 4)
  {
    printf("%d\n", product);
    product *= x;
    count += 1;
  }
>>>>>>> 7f7fac2 (added changes)
}