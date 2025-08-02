#include <stdio.h>
int main()
{
    int i, j, row, col, maximum, maxi=0, maxj=0;

    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    printf("Enter the Elements of the Matrix: \n");

    for (i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }

    }
    maximum = matrix[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if(matrix[i][j] > maximum)
            {
                maximum = matrix[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }

    printf("Maximum Element in the Matrix is %d [%d] [%d]\n", maximum,maxi, maxj);

    return 0;
}
