//An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
#include<stdio.h>
int main()
{
    int num, sum = 0, i, r;
    printf("Please enter a number: ");
    scanf("%d",&num);

    for(i = num; i>0; i=i/10)
    {
        r = i%10;
        sum = sum + r * r * r;
    }
     if ( num == sum )
     {
        printf("%d is an armstrong number.",num);
     }
    else{
        printf("%d is not an armstrong number.",num);
    }
    return 0;
}
