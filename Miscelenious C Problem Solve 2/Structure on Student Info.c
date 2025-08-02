/*Q3: Write a program that performs the following operations:
a)  i) Define a structure named “Student_Info” with student_ID(string), student_Name(string), an array marks (float) to contain scores of 5 subjects.
    Use appropriate size for the strings.
    ii) Put default values with your own name, your own student id, and zeroes for marks.
b)  In the main() function,
i)  Declare an array “students” of Student_Info structure of size (LAST_FOUR_DIGITS_OF_YOUR_STUDENT_ID % 11 + 10).
ii)  Take input from keyboard for all students in “students” array.
Ans: */

#include <stdio.h>
#include <string.h>

struct Student_Info{
    char student_ID[100];
    char student_Name[100];
    float marks[5];
};
struct Student_Info v = {.student_ID = {"011221519"}, .student_Name = {"Tareq Monour"}, .marks = {0, 0, 0, 0, 0}};
int main()
{
    int n = 1519 % 11 + 10;
    struct Student_Info students[3];
    for (int i = 0; i < 2; i++){
        fflush(stdin);
        gets(students[i].student_ID);
        fflush(stdin);
        gets(students[i].student_Name);
        fflush(stdin);

        for (int j = 0; j < 5; j++){
            scanf("%f", &students[i].marks[j]);
        }
    }

    for (int k = 0; k < 2; k++){
        printf("\n\n");
        puts(students[k].student_ID);
        puts(students[k].student_Name);
        for (int i = 0; i < 5; i++){
            printf("%.1f ", students[k].marks[i]);
        }
    }
}
