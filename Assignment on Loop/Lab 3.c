#include<stdio.h>
int main()
{
    int num, sum, digit, fDigit, lDigit;
    scanf("%d", &num);
    sum=0;
    int n = num;
    while(n!=0)
    {
        int digit = n % 10;
        if(n==num)
            lDigit = digit;
        sum+= digit;
        n=n/10;
        if(n==0)
            fDigit = digit;
    }
    printf("%d %d %d \n", fDigit, lDigit, sum);

    if((fDigit+lDigit)<8 && sum%6==0)
        printf("This is Clipto Number");
    else
        printf("This is not Clipto Number");
}
