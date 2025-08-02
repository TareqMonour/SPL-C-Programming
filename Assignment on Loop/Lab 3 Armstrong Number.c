#include<stdio.h>
#include<math.h>
int main()
{
    int num, sum = 0, i, rem;
    printf("Enter a Numbeer: ");
    scanf("%d",&num);

   for(i = num; i>0; i=i/10)
   {
      rem = i % 10;
      sum = sum + pow(rem, count);
   }

     if ( num == sum )
     {
        printf("%d is an Armstrong number.", num);
     }
    else{
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}


