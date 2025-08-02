
//Palindrome number is such number which when reversed is equal to the original number.
#include<stdio.h>
int main()
{
    int num, i, rev;
    printf("Enter any number: ");
    scanf("%d", &num);
    rev = num;
    for(i=0; num>0; num=num/10)
    {
        i = i * 10;
        i = i + (num%10);
    }
    if(rev == i)
       printf("%d is Palindrome Number.", rev);
    else
       printf("%d is not a Palindrome Number.", rev);
    return 0;
}
