#include <stdio.h>
int main()
{
    int angle1, angle2, angle3, total;
    printf("Input three Angles of Triangle : ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    total = angle1 + angle2 + angle3;

    if(total == 180)
    {
     printf("The Triangle is Valid.\n");
    }
    else
    {
     printf("The Triangle is Invalid.\n");
    }
    return 0;
}

