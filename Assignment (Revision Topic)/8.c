
#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celcius is : %f ", celcius);

 return 0;
}
