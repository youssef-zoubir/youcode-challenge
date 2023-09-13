#include <stdio.h>

int main()
{
    float  Fahrenheit,Celsius;
  printf("entrer temperature in Fahrenheit:");
  scanf("%f",&Fahrenheit);

  Celsius = (Fahrenheit-32)/1.8;
  printf("%.2f Fahrenheit = %.2f Celsius",Fahrenheit,Celsius);

    return 0;
}
