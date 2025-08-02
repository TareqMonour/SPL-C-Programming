#include<stdio.h>
int main()
{
    int arr1[4]= {2,3,4,5};
    int arr2[4]= {4,6,7,9};
    int sum[4];
    int i;
    for(i=0; i<=3; i++)
    {
        sum[i]=arr1[i]+arr2[i];

    }
    for(i=0; i<=3; i++)
    {
        if(i==0)
            printf("{%d ", sum[i]);
        else if(i==3)
            printf(" %d}", sum[i]);
        else
            printf("%d ", sum[i]);
    }
}
