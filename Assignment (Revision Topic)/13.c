#include<stdio.h>
int main()
{
   int length, width, area;
   printf("Enter length and width of a rectangle : ");
   scanf("%d %d", &length, &width);
   area = length * width;
   printf("Area of rectangle : %d", area);

   return (0);
}
