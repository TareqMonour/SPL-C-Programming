#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=5; i<n; i=i*2)
    {
        printf("%d ", i);
    }
}
