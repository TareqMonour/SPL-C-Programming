#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
           sum+=a[i];
        }
    }
    printf(" Sum of Even number is :%d", sum);
}



