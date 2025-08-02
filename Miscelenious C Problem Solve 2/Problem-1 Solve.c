/*Here is the Solve of the problem 1 */

#include<stdio.h>
int main()
{
 float a,b,c,X,Y,Z;

 printf(" Here Input the value of a,b,c: ");
 scanf("%f%f%f",&a,&b,&c);

 X=(a-b)/3+(c*2)-1;
 Y=a-(b/(3+c)*2)-1;
 Z=a-((b/3)+c*2)-1;

 printf("X=%.2f\nY=%.2f\nZ=%.2f\n",X,Y,Z);

 return 0;
}
