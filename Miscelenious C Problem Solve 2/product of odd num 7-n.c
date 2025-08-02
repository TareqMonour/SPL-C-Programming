#include<stdio.h>
int main()
{
    int i,n, product;
    printf("Enter a num grater than 7 : ");
    scanf("%d", &n);
    product=1;
    for(i=7; i<=n; i++)
    {
        if(i%2!=0)
            product*=i;
    }
    printf("%d", product);

    return 0;
}
