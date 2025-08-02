#include<stdio.h>
struct student
{
      char name[20];
      float marks[4];
      float total_marks;
};
int main( )
{
      int i, j, index = 0;
      float highest = 0;
      struct student num[40];
      for(i = 0; i < 40; i++)
      {
            num[i].total_marks = 0;
            printf("Enter information for student %d : \n", i+1);
            printf("Enter name : ");
            scanf("%s", & num[i].name);
            printf("Enter marks for 4 subjects : ");
            for(j = 0; j < 4; j++)
            {
                  scanf("%f",&num[i].marks[j]);
                  num[i].total_marks += num[i].marks[j];
            }
            if(num[i].total_marks > highest)
            {
                  highest = num[i].total_marks;
                  index = i + 1;
            }
            printf("Total marks of student %d = %.2f\n\n", i + 1, num[i].total_marks);
      }
      printf("\nstudent number %d has got the highest marks\nHighest marks is = %.2f\n",index, highest);
      return 0;
}
