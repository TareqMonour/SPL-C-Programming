#include <stdio.h>
int main()
{
    int num, product=1;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }
    printf("Product of digits = %ld", product);
    return 0;
}
