#include <stdio.h>

int mishu(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{

    int a, b, max;
    scanf("%d %d", &a, &b);

    max = mishu(a,b);
    printf("%d is the Maximum Number", max);

    return 0;
}
