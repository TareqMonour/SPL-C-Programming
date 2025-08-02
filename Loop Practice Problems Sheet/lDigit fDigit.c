#include <stdio.h>

main()
{
    int num, last, sum=0;
    printf("Enter any number : ");
    scanf("%d", &num);

    last = num%10;
    printf("The last digit of entered number: %d\n", last);

    while(num>=10)
    {
        //sum +=last;
        num = num/10;
    }

    printf("The first digit of entered number: %d\n", num);

   /* if ( (num+last)<8 && sum % 6 == 0)
    {
        printf("CLipto Number");
    }
    else
    {
        printf("Not CLipto Number");
    }
*/

}


