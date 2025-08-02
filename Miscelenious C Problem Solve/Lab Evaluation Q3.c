
#include<stdio.h>

int scanandmaxprime(int n)
{
    int arr[n],max=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        int prime_or_not=findifprime(arr[i]);
        if(prime_or_not==1)
        {
            if(max<arr[i])
                max=arr[i];
        }
    }
    return max;

}
int findifprime(int x)
{
    int c=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)return 1;
    else return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int max=scanandmaxprime(n);
    printf("%d", max);
}
