#include<stdio.h>
int main()
{
    int n,m;//x=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int A[n],ans[n];
    printf("Type all elements of A:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the value of m:");
    scanf("%d",&m);
    int B[m];
    printf("Type all the elements of B:");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&B[i]);
    }

    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=0; j<m; j++)
        {
            if(A[i]==B[j])
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("%d ",A[i]);
        }
            //ans[x++]=A[i];
    }
}
