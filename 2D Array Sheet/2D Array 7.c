#include<stdio.h>
int main()
{
  int i, j, p, q, m, n, k, tot = 0;
  int fst[10][10], sec[10][10], mul[10][10];

  printf("Enter Rows and Columns for first matrix: ");
  scanf("%d%d", &m, &n);

  printf("Insert your 1st Matrix Elements : \n ");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &fst[i][j]);

  printf("Enter the Rows and Columns for 2nd Matrix: ");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf("Given Matrices cannot be multiplied with each other.\n ");
  else
  {
    printf("Insert your 2nd Matrix Elements : \n ");

    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
        scanf("%d", &sec[i][j] );

    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[i][k] * sec[k][j];
        }
        mul[i][j] = tot;
        tot = 0;
      }
    }

    printf("Matrix Multiplication Result is: \n ");
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++)
        printf("%d \t", mul[i][j] );
      printf(" \n ");
    }
  }
  return 0;
}


