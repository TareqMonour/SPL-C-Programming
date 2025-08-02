
#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int arr[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nMajor Diagonal : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            printf("%d ", arr[i][j]);
        }
        //printf("\n");
    }
     printf("\nMinor Diagonal : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(n-i-1)
            printf("%d ", arr[i][j]);
        }
        //printf("\n");
    }

    return 0;
}
