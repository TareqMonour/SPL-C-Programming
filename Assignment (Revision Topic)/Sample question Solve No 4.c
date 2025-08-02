#include<stdio.h>
#include<ctype.h>

int main()
{
      char cat;
      int year;
      int mem_num;
      float income;
      printf("Input the Category, Years of Work Experience, Number of Family Member and Total Income: ");
      scanf("%c%d%d%f",&cat, &year,&mem_num,&income);
      if(cat == 'X' || cat == 'x')
      {
            if(year >=12 && mem_num > 5 || income<1000.50 )
                  printf("Will Receive the Bonus.");
            else if(mem_num>5)
            {
                 printf("Will Receive the Bonus.");
            }
            else
                  printf("Will not Receive the Bonus.");
      }
      else if (cat == 'Y' || cat == 'y'|| cat == 'Z' || cat == 'z')
      {
          if(year >=12 && mem_num > 5 || income<1000.50 )
                  printf("Will Receive the Bonus.");
          else if(mem_num > 8 && income < 1100.78)
                  printf("Will Receive the Bonus!");
          else
                  printf("Will not Receive the Bonus!");
      }

      return 0;
}

