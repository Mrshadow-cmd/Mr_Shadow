#include <stdio.h>

void main()
{
  int b, c;
  float a;
  while (1)

  {
    printf("Enter temperature:");
    scanf("%f", &a);
    printf("\n Select Unite(by choosing the number) \n1. F\n2. C\n3. K\n:>>");
    scanf("%d", &b);
    if (b < 3 || b == 0)
    {
      printf("Invalid entry........");
      break;
    }
    else
    {

      switch (b)
      {
      case 1:
        printf("\n Select Unite to convert in\n 1. C\n2. K:\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
          printf("%f", (a - 32) * 0.5);
          break;
        case 2:
          printf("%f",(a - 273.15) * 1.8 + 32);
          break;
        }
        break;

      case 2:
        printf("\n Select Unite to convert in\n 1. F\n2. K:\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
          printf("%f", (a * 1.8 + 32));
          break;
        case 2:
          printf("%f", (a + 273.15));
          break;
        }
        break;
      case 3:
        printf("\n Select Unite to convert in\n 1. C\n2. F:\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
          printf("%f", (a - 273));
          break;
        case 2:
          printf("%f", (a - 273.15) * 1.8 + 32);
          break;
        }
      }
    }
  }
}