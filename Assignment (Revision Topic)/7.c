#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("Enter Temperature in Celcius : ");
    scanf("%f", &celcius);
    fahrenheit = (1.8 * celcius) + 32;
    printf("Temperature in Fahrenheit is : %f ", fahrenheit);

 return 0;
}
