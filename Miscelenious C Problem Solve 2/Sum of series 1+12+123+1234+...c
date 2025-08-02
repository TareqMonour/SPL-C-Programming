#include<stdio.h>
int main()
{

    int i,n,j=1;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+j;
        j=j*10+(i+1);
    }
    printf("sum= %d",sum);
return 0;
}
