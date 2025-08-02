#include<stdio.h>
int main()
{
    int arr1[7]={10,5,6,100,90,0,34};
    int arr2[7]={};
    int i, z=0;
    for(i=6; i>=0; i++)
    {
        arr2[i]=arr1[6-i];
        z=z+1;
    }
    printf("%d",arr2[i]);
}
