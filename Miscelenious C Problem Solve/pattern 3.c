#include<stdio.h>
int main()
{
    int i, n, j, number=5;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1-i; j++)
        {
            printf("%d ",number);
        }
        number--;
        printf("\n");
    }

    return 0;
}
