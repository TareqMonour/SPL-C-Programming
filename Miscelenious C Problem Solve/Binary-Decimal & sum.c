// Binary- Decimal
#include<stdio.h>
int main()
{
    int i, n, addition=0, decimal=0;
    printf("Enter the Binary Number: ");
    scanf("%d", &n);
    for(i=0 ; n/10!=0; n=n/10, i++)
    {
        decimal=decimal+(n%10)*pow(2,i);
        addition=addition+(n%10);
    }
    decimal=decimal+n*pow(2,i);
    addition=addition+n;

    printf("%d | %d", decimal, addition);
    return 0;
}


