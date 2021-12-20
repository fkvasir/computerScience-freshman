#include <stdio.h>

int main()
{
  int item;
  int product = 1;

  printf("Enter Item: ");
  scanf("%d", &item);

  if (item != 0)
  {
    product = product * item;
  }
  else
  {
    product = item;
  }

  printf("%d", &product);
}