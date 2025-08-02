#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int A[n];
    int B[n];

    for(i=0; i<n; i++)
    {
       scanf("%d",&A[i]);

    }
     printf("Array of A: ");
     for(i=0; i<n; i++)
    {
     printf("%d ",A[i]);
    }

   for(i=0; i<n; i++)
    {
      B[i]=A[i];
    }
    printf("\nArray of B :");
    for(i=n-1; i>=0; i--)
    {
       printf("%d ",B[i]);
    }

}
