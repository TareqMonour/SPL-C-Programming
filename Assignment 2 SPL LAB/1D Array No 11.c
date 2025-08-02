//Replace the number which is divisible by 3
#include<stdio.h>
int main ()
{
    int i, n, m1, m2;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%3==0)
        {
            a[i]= -1;
        }
    }
        for(i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }

    return 0;
}
