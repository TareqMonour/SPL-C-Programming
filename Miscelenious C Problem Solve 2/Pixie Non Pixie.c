//Pixie / Not Pixie
#include<stdio.h>
int main()
{
    int num, i, sum1, sum2, a, flag=1, lDigit, fDigit;
    printf("Enter the Number : ");
    scanf("%d", &num);
    a=num;
    for(i=1; a/10!=0; a=a/10, i++)
    {
        if(i==1)
        {
            lDigit=a%10;
            printf("Last Digit: %d\n", lDigit);
        }
    }
    fDigit=a;
    printf("First Digit: %d\n", fDigit);
    sum1=fDigit+lDigit;
    {
        if(sum1>=7)
        {
            flag=0;
        }
        for(i=1; i<=num; i++)
        {
            if(num%i==0)
            {
                sum2+=i;
            }
        }
        if(2*num<=sum2)
        {
            flag=0;
        }

        if(flag==1)
        {
            printf("Pixie");
        }
        else
        {
            printf("Not Pixie");
        }
    }
}
