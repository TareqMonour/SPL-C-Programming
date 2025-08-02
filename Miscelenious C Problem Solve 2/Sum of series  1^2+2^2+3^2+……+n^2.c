#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter Value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("Sum of Series :1^2+2^2+3^2+4^2+...%d^2 = %d", n, sum);
    return 0;
}
