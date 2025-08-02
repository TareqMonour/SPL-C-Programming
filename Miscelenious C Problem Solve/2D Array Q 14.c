#include <stdio.h>
int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int checkerArray[row * col];
    int k = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int status = 1;
            int x = k - 1;
            while (x >= 0)
            {
                if (checkerArray[x] == arr[i][j])
                {
                    status = 0;
                    break;
                }
                x--;
            }
            if(status==0){
                arr[i][j]=-1;
            }

            else{
                checkerArray[k]=arr[i][j];
                k++;
            }

        }
    }


    printf("\nThe Array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
