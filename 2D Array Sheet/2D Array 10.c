#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integer input of squire Matrix :");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<n/2)
            {
                if(j==n-1)
                {
                    sum+=arr[i][j];
                }
                if(j<n/2 && i==0)
                {
                    sum+=arr[i][j];
                }
            }
            else
            {
                if(j==0)
                {
                    sum+=arr[i][j];
                }
                if(j>n/2 && i==n-1)
                {
                    sum+=arr[i][j];
                }
            }
        }
    }
    printf("\n%d\n", sum);
    return 0;
}
