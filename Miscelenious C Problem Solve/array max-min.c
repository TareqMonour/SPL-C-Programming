#include<stdio.h>
int main()
{
    int arr[1000];
    int i, n;
    scanf("%d", &n);
    for(i=0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];  //for min int min = arr[0];
    for(i=1; i<=n-1; i++)
    {
        if(arr[i]>max) // (arr[i] < min)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}
