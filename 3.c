#include <stdio.h>

int main()
{
  int pH;
  printf("Enter ph level:\n");
  scanf("%d", &pH);

  if (pH > 7)
  {
    if (pH < 12)
    {
      printf("ALkaline");
    }
    else
    {
      printf("Very alkaline");
    }
  }
  else
  {
    if (pH == 7)
    {
      printf("Neutral");
    }
    else
    {

      if (pH > 2)
      {
        printf("Acidic");
      }
      else
      {
        printf("Very acidic");
      }
    }
  }

  return 0;
};
