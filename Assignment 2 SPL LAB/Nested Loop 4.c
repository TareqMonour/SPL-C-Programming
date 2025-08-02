#include<stdio.h>
int main()
{
    int i, n, j, k, num=1;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("_");

        }
        for(k=1; k<=i; k++)
        {
            printf("%d", num);
        }
        num++;
        printf("\n");
    }

    return 0;
}


