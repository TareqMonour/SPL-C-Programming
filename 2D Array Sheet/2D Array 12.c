#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    /*  int rev[row][col];
      int m=0, n=0;
      for(int i=row-1; i>=0; i--)
      {
          n=0;
          for(int j=col-1; j>=0; j--)
          {
              rev[m][n] = arr[i][j];
              n++;
          }
          m++;
      }
    */

    int rev[row][col];
    int m=0, n=0;
    for(int i=0; i<row; i++)
    {
        n=0;
        for(int j=col-1; j>=0; j--)
        {
            rev[m][n] = arr[i][j];
            n++;
        }
        m++;
    }


    printf("Given Matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

   /*
    printf("\nReverse Matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", rev[i][j]);
        }
        printf("\n");
    }
*/
    printf("\nReverse Matrix Row Wise :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", rev[i][j]);
        }
        printf("\n");
    }


    return 0;
}
