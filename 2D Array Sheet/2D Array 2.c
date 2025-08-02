#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int identity_matrix[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                identity_matrix[i][j] = 1;
            }
            else
            {
                identity_matrix[i][j] = 0;
            }
        }
    }
    printf("\nIdentity Matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", identity_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

