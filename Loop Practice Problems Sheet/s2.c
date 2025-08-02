#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i!=n)
        {
            printf("%d",i);
            printf(",");
        }
        else
        {
            printf("%d",i);
        }
    }
    return 0;
}
