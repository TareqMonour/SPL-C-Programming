#include<stdio.h>
int main()
{
    int sum, temp;
    printf("Enter any number: ");
    scanf("%d", &temp);
    for(sum = 0; temp>0; temp = temp/10)
        sum = sum + (temp%10);

    printf("Sum of digits: %d",sum);
    return 0;
}
