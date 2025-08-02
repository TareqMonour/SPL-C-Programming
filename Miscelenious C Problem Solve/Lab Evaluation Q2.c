
#include<stdio.h>
int main()
{
    int m,n,i,j, sum=0;
    int arr[100][100];
    scanf("%d %d", &m, &n);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0 || i==m-1)
            {
                if(j>0 && j<n-1)
                    sum+=arr[i][j];
            }
            if(j==0 || j==n-1)
            {
              if(i>0 && i<m-1)
                sum+=arr[i][j];
            }

        }
        if(m%2!=0 && n%2!=0)
        {
            if(i==m/2 && j==n/2)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d", sum);

}
