#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);


    if(num > 0)
    {
        printf("Entered number is Positive");
    }
    else if(num < 0)
    {
        printf("Entered number is Negative");
    }
    else
    {
        printf("Entered number is Zero");
    }

    return 0;
}
