#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
         printf(" %d",i);

        if(i!=n)
        {
         if(i%2==0)
           printf("+");
         else
           printf("-");
        }
    }

}

