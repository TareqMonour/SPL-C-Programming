#include<stdio.h>
int main()
{
    int i=0,j,a,b;
    printf("Enter the range a & b : ");
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i++)
    {
        int s=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                s++;
        }
        if(s==0)
            printf("%d ",i);

    }
}


