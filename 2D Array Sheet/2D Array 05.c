#include<stdio.h>
int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int identity_matrix[rows][cols];
    int i,j;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
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
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d\t", identity_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
