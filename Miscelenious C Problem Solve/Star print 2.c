//General Equation: a+(n-1)*d
#include<stdio.h>
int main()
{
    int i, n, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
#include<stdio.h>
int main()
{
    int i, n, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}

//*/
