#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int myArray[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    printf("\nThe Array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        int sum =0;
        for (int j = 0; j < col; j++)
        {
            sum+=myArray[i][j];
        }

        printf("%d\n",sum);
    }

    return 0;
}
