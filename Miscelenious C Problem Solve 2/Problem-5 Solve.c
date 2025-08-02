/* Write a program (WAP) that will reverse the digits of an input integer.
 Here is the Solve of the problem 5 */

#include<stdio.h>
int main()
{
 int number,reverse=0,x,temp;
 printf("Enter a random number: ");
 scanf("%d",&number);
 temp=number;
 while(temp!=0)
 {
     x=temp%10;
     reverse=reverse*10+x;
     temp=temp/10;
 }
 printf("%d\n",reverse);



 return 0;
}
