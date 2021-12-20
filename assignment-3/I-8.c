<<<<<<< HEAD
#include <stdio.h>

int factorial(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }
  return f;
}

int main()
{
  printf("%d", factorial(4));
}

// In computer science, recursion is a programming technique using
// function o arlgorithm that calls itself one or more times until
// a specified condition is met at which time the rest of each
=======
#include <stdio.h>

int factorial(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }
  return f;
}

int main()
{
  printf("%d", factorial(4));
}

// In computer science, recursion is a programming technique using
// function o arlgorithm that calls itself one or more times until
// a specified condition is met at which time the rest of each
>>>>>>> 7f7fac2 (added changes)
// repetition is processed from the last one called to the first.