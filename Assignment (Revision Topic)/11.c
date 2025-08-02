#include <stdio.h>
int main()
{
  float radius, Area;
  printf("Enter the Radius: ");
  scanf("%f", &radius);
  Area = 3.1416 * radius * radius;
  printf(" The Area is :%f\n", Area);
  return 0;
}
