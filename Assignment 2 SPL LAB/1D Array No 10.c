#include<stdio.h>
int main()
{
    int n,m,x=1000;
    printf("Type the value of n:");
    scanf("%d",&n);
    int A[x],temp[x];
    printf("Type all elements of A:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        temp[i]=A[i];
    }
    printf("Type the value of m:");
    scanf("%d",&m);
    int B[x];
    printf("Type all the elements of B:");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&B[i]);
        A[i]=B[i];
    }
    for(int i=0;i<n;i++)
    {
        B[i]=temp[i];
    }
    for(int i=0;i<m;i++)printf("%d ",A[i]);
    printf("\n");
    for(int i=0;i<n;i++)printf("%d ",B[i]);



}
