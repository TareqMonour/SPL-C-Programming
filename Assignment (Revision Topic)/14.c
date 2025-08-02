
#include <stdio.h>
int main()
{
    int days, weeks, years;
    printf("Enter Days: ");
    scanf("%d", &days);

    years = (days / 365);
    weeks = (days %365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    printf("Years are: %d\n", years);
    printf("Weeks are: %d\n", weeks);
    printf("Days are: %d", days);

    return 0;
}
