#include <stdio.h>
void mishu();
int main()
{
    printf("I am in Main() Function\n");
    mishu();
    printf("I am exiting Main() Function\n");
    return 0;
}

void mishu()
{
    printf("I am in mishu() Function\n");
    int a, b, c ;
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is the Maximum Number\n", a);
    else
        printf("%d is the Maximum Number\n", b);

    printf("I am exiting mishu() Function\n");
}
