#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("Enter the Number of Row & Column : ");
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], sum[row][col];

    printf("Enter elements of 1st matrix:\n");

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }

    // Adding two Matrices
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // Printing the Result
    printf("\nSum of two Matrices: \n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

