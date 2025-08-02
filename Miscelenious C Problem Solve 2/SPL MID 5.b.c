#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i=1; i<=n/2+1; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==i || j==n-i+1)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int k=n/2+1; k<=n; k++)
    {
        for(int l=0; l<=n; l++)
        {
            if(l==n/2)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");



    }
    return 0;
}
