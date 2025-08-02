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
    }
        for(int i=0; i<5; i++)
    {
        if(i%2==0)
        {
           printf(" Even index is :%d\n", a[i]);
        }
    }
    for(int i=0; i<5; i++)
    {
        if(a[i]%2==0)
        {
           printf(" Even value is :%d\n", a[i]);
        }
    }
            for(int i=0; i<5; i++)
    {
        {
            sum+=a[i];
        }
        printf("%d\n", sum);
    }
}

