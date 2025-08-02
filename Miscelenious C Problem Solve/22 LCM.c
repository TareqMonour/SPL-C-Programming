#include <stdio.h>
int main()
{
    int i, num1, num2, max, cm=1;
    printf("Enter any two: ");
    scanf("%d%d", &num1, &num2);
        if(num1==0||num2==0)
    {
        cm=0;
        printf("HCF of %d and %d = %d\n", num1, num2, cm);
        return 0;
    }
    // Find max number between num1 and num2
    max = (num1 > num2) ? num1 : num2;
    i = max;
    while(1)
    {
        if(i%num1 == 0 && i%num2 == 0)
        {
            cm = i;
            break;
        }
        i += max;
    }
    printf("LCM of %d and %d = %d", num1, num2, cm);
    return 0;
}
