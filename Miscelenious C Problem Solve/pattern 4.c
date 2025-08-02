#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int number=n*2;
    for(i=number; i>0; i-=2)
    {
        for(j=i; j>0; j-=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

