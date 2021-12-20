#include <stdio.h>

int odd_numbers()
{
  int number1 = 5, number2 = 25, q;
  for (q = number1; q <= 25; q = q + 2)
  {
    return q;
  }
}

int even_numbers()
{
  int number1 = 16, number2 = 35, l;
  for (l = number1; l <= 36; l = l + 2)
  {
    printf("%d", l)
  }
}

int main()
{
  int first, second, type;
  int invalid_count = 0;

  printf("Enter a number: ");
  scanf("%d", &first);

  printf("Enter another number: ");
  scanf("%d", &second);

  if (first >= second)
  {
    printf("\nInvalid input range.\n");
    return 0;
  }

  do
  {
    if (invalid_count > 0)
    {
      printf("\nInvalid input.\n");
    }
    printf("Enter [1] to use display even [2] to display odd: ");
    scanf("%d", &type);
    invalid_count++;
  } while (type != 1 && type != 2);

  if (type == 1)
  {
    printf("\nEven numbers between %d and %d:\n", first, second);
    even_numbers(first, second);
  }
  else if (type == 2)
  {
    printf("\nOdd numbers between %d and %d:\n", first, second);
    odd_numbers(first, second);
  }

  return 0;
}
