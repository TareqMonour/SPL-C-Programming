#include<stdio.h>
#include<math.h>
int main()
{
    int i,x=0, a=0, sum=0, n;
    scanf("%d", &n);

    for(i=0; i<=n;  i+=pow(x,2)+a)
    {
        sum=sum+i;
        x+=2;
        a++;
    }
    printf("%d",n);
    printf("%d", sum);

    return 0;
}
