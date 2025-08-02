#include<stdio.h>
int main()
{
    int n1, n2, a=1, b=2, sum = 0;
    printf("Enter Value of n1, n2: ");
    scanf("%d %d", &n1, &n2);
    while(a<n1 && b<n2)
    {
        sum = sum + a*b;
        a=a+1;
        b=b+1;
    }
    printf("Sum of Series :1x2+2x3+3x4+4x5+...%dx%d = %d", n1, n2, sum);
    return 0;
}

