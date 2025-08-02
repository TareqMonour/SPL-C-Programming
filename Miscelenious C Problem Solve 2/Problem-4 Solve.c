/*Write a program that will take N numbers as inputs and compute their average. You
need to take N as an input from the user. You have to use loops for this problem.
Here is the Solve of the problem 4 */

#include<stdio.h>
int main()
{
 int N, i;
 float number, AVG=0.000000, sum=0;
 printf("Enter the value of N: ");
 scanf("%d",&N);
 printf("Enter %d numbers: ",N);
 for(i=1;i<=N;i++){
     scanf("%f",&number);
     sum=sum+number;
 }
 AVG=sum/N;

 printf("Avg=%0.6f",AVG);

 return 0;
}
