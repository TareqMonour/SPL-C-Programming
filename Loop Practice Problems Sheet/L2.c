#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    int s=1;
    printf("%d",s);
    for(i=1; i<n; i++)
    {

        s=s+2;

        printf(",%d",s);
    }

    return 0;
}
