/*
#include<stdio.h>
int main()
{
    int base, exponent,power, i;
    printf("Enter base and exponent: ");
    scanf("%d %d",&base, &exponent);
    power = 1;
    i = 1;
    while(i <= exponent)
    {
        power = power * base;
        i++;
    }
    printf("Power : %d", power);
    return 0;
}

*/

#include<stdio.h>
int main()
{
    int base, exponent, i, power;
    printf("Enter base and exponent: ");
    scanf("%d %d",&base, &exponent);

    power = 1;
    for(i=1; i<=exponent; i++)
        power = power * base;
    printf("Power : %d", power);
    return 0;
}
