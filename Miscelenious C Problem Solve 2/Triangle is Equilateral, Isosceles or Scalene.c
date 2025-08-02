//Triangle is Equilateral, Isosceles or Scalene

#include<stdio.h>
int main()
{
    int side1, side2, side3;

    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side2==side3)
    {
        //If all sides are equal
        printf("Equilateral Triangle.\n");
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
        //If any two or more sides are equal
                printf("Isosceles Triangle.\n");
    }
    else
    {
        //If none sides are equal
        printf("Scalene Triangle.\n");
    }


    float x1, x2, y1, y2, distance;
    printf("Enter Input x1, y1, x2, y2 : ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between Two Points: %f", sqrt(distance));

    return 0;
}
