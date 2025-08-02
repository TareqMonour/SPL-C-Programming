/* Solve of the problem 2 */

#include<stdio.h>
int main()
{
 int a,b,c;

 printf("Input the value of angels: ");
 scanf("%d%d%d",&a,&b,&c);
 if(a+b+c==180 && a>0 && b>0 && c>0)
 {
     printf("Yes\n");
 }
 else
    printf("No\n");

 return 0;
}
