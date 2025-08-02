#include<stdio.h>
int main()
{
    int i, j, n, number=1;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("  ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        for(int j=2; j<=i; j++)
        {
            /* if(i==n || j==1 || j==2*i-1)
            {
                printf("%d ",j);

            }
            else
            {
                printf("  ");
            }  */
        }
        printf("\n");
    }
    return 0;
}

