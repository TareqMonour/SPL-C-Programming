#include <stdio.h>
#include <math.h>

int main()
{

    int num, firstDigit, lastDigit, sum=0;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d", sum);
    return 0;
}
