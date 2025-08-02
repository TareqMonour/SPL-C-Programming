
#include<stdio.h>
int main ()
{
    int n, i;
    scanf("%d",&n);
    float a[n];
    float avg, sum=0;

    printf("Enter the array value: ");

    for(i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    avg= (float)sum/n;

    printf("The sum value : %.3f\n", sum);

    printf("The average value: %.3f\n", avg);

    return 0;
}
