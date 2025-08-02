#include<stdio.h>
int main()
{
/* int n = 3, i, j, sum=0;
   for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
          if(i==j)
            sum+=i+j;
          else if(i>j)
            sum+=i+n;
          else
            sum+=n-j;
        }
    }
    printf("%d", sum);



    int n=3, i, j, sum=0;
    i=0;
    while(i<n)
    {
        j=0;
        while(j<=i)
        {
            if(i==j)
            sum+=i+j;
          else if(i>j)
            sum+=i+n;
          else
            sum+=n-j;
            j++;
        }
       i++;
    }
     printf("%d", sum);


     */

     int n=3, i, j, sum=0;
     i=0;
     do{
        j=0;

        do{
            if(i==j)
                sum+=i+j;
            else if(i>j)
                sum+=i+n;
            else
                sum+=n-j;
                j++;

          }while(j<=i);
          printf("%d", sum);
          i++;

      }while(i<n);

return 0;
}





