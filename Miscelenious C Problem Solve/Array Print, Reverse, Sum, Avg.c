#include<stdio.h>
int main()
{
    int i, num[5], sum=0;
    for(i=0; i<5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Printing values are : ");
    for(i=0; i<5; i++)
    {
       printf("%d ", num[i]);
    }
    printf("\n");
    printf("Printing reverse order : ");
    for(i=4; i>=0; i--)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        sum=sum+num[i];
    }
    float avg= (float)sum/5;
    printf("The avg is: %.2f", avg);
}


