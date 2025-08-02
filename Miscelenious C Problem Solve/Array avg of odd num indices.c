#include<stdio.h>
int main()
{
    int arr[100];
    int i, n, count=0;
    float sum=0, avg;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("Index : %d value : %d \n", i, arr[i]);
        if(i%2!=0)
        {
            sum=sum+arr[i];
            count++;

        }

    }
    avg= sum/count;
    printf("Avg is : %f", avg);


}
