#include<stdio.h>
#define SIZE 4
void main()
{
    int i, j, mat[SIZE][SIZE]={0};
    for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

     for(i=0; i<SIZE-1; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            scanf("%d", &mat[j][i]);
        }
    }

     for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<i; j++)
        {
            mat[i][j]+=mat[j][i];
        }
    }

     for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

