#include<stdio.h>
int main()
{
    int num, i, flag;
    printf("Enter a number: ");
    scanf("%d",&num);
    flag=0;
    for(i=2; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a Prime Number", num);
    else
        printf("%d is a Not Prime Number", num);
    return 0;
}
