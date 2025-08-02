/*Q2: WAP that has a structure Student with  attributes- name(string), id(int) and CGPA(float).
    In the main function, take a Student structure  array of size n. Input the information for n students.
    Then, output all the information of the student with  the shortest name and of the student with the longest name.
Ans: */
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int id;
    float cg;
};

int main()
{
    int n, temp = -9999, temp2 = 9999;
    printf("Enter the Student amount: ");
    scanf("%d", &n);
    struct Student ch[n];
    char t[n];

    for (int i = 0; i < n; i++)
    {
        printf("Student-%d info: \n", i + 1);
        printf("Write the Name: ");
        fflush(stdin);
        fgets(ch[i].name, sizeof(ch[i].name), stdin);
        ch[i].name[strcspn(ch[i].name, "\n")] = '\0';

        t[i] = strlen(ch[i].name);

        printf("Write the Id: ");
        scanf("%d", &ch[i].id);

        printf("Write the CGP: ");
        scanf("%f", &ch[i].cg);

        printf("\n");
    }


for (int j = 0; j < n; j++)
    {
        if (temp < t[j])
        {
            temp = t[j];
        }

        if (temp2 > t[j])
        {
            temp2 = t[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (strlen(ch[i].name) == temp2)
        {
            printf("\nShotest Info: ");

            printf("\nName: ");
            puts(ch[i].name);
            printf("Id:%d", ch[i].id);
            printf("\nCgp:%.02f", ch[i].cg);
            printf("\n");
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (strlen(ch[i].name) == temp)
        {
            printf("\nLongest Info: ");

            printf("\nName: ");
            puts(ch[i].name);
            printf("Id:%d", ch[i].id);
            printf("\nCgp:%.02f", ch[i].cg);
            printf("\n");
        }
    }
}
