#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    int transpose[n][n];

    printf("Enter the matrix: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    int status = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(matrix[i][j] != transpose[i][j])
            {
                status = 0;
                break;
            }
        }
    }


    if(status == 1)
    {
        printf("Yes");

    }
    else
    {
        printf("No");
    }

    return 0;
}
