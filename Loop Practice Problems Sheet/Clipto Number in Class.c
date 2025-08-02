#include <stdio.h>
/*
Clipto Number
1. Sum of the first and Last digit < 8
2. Sum of digits is divisible by 6
*/
int main()
{
    int num, fDigit, lDigit;
    scanf("%d", &num);

    int sum = 0;

    int n = num;

    while (n != 0)
    {                       // 769 76 7 0
        int digit = n % 10; // 9 6 7
        if (n == num)
            lDigit = digit;
        sum += digit; // 0 9 15 22
        n = n / 10;   // 76 7 0
        if (n == 0)
            fDigit = digit;
    }

    printf("%d %d %d", fDigit, lDigit, sum);

    if ( (fDigit+lDigit)<8 && sum % 6 == 0)
    {
        printf("CLipto Number");
    }
    else
    {
        printf("Not CLipto Number");
    }
}
