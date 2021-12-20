
#include <stdio.h>

const char *checkBloodPressue(int bp)
{
  if (bp >= 140)
  {
    return "Hypertension";
  }
  else if (bp >= 120 && bp <= 139)
  {
    return "Prehypertension";
  }
  else
  {
    return "Normal";
  }
};

int main()
{
  int bloodPressure;

  printf("Enter Systolic Blood Pressure: ");
  scanf("%d", &bloodPressure);

  printf(checkBloodPressue(bloodPressure));
}
