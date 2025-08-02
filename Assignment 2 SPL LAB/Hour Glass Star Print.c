
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the Width of the Hour Glass: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<i; j++)
            printf(" ");

        for (k=i; k<=n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = n-1; i>=1; i--)
    {
        for (j=1; j<i; j++)
            printf(" ");

        for (k=i; k<=n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

