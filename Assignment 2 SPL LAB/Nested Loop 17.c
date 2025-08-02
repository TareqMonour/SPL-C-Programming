#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {
            if(i==n/2+1||j==n/2+1||j==n/2+1-x||j==n/2+1+x)
                printf("$");
            else
                printf("_");
        }
        if(i>=n/2+1)
        x--;
        else
        x++;
        printf("\n");
    }
}
