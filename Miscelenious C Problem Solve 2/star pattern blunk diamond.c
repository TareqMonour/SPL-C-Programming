#include<stdio.h>
int main()
{
    int i, n, j, k;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        printf("*");
        for(k=1; k<=2*i-3; k++)
        {
            printf(" ");
        }
        if(i!=1)
        {
            printf("*");
        }

        printf("\n");
    }


    //Few issue in printing lower part

    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        printf("*");
        for(k=1; k<=n*2-3-2*i; k++)
        {
            printf(" ");
        }

        if(i!=1)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
