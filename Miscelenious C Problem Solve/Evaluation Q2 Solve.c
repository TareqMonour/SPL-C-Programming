#include<stdio.h>
#include<string.h>
struct Student
{
   char name[50];
   int id;
   float CGPA;
}st[];
int main()
{
    int n, maxLength=0, minLength=999, shortI=0, longI=0;
    scanf("%d", &n);
    for( int i=0 ; i<n*2 ; i++)
    {
        gets(st[i].name);
        scanf("%d", &st[i].id);
        scanf("%f", &st[i].CGPA);
    }
    for( int i = 0 ; i<n ; i++)
    {
        if(strlen(st[i].name)>maxLength)
        {
            longI=i;
        }
        if(strlen(st[i].name)<minLength)
        {
            shortI=i;
        }
    }
    puts("Shortest Info:\n");
    puts("Name: ");
    puts(st[shortI].name);
    printf("\nId: %d", st[shortI].id);
    printf("\nCGPA: %f", st[shortI].CGPA);

    puts("longest Info:\n");
    puts("Name: ");
    puts(st[longI].name);
    printf("\nId: %d", st[longI].id);
    printf("\nCGPA: %f", st[longI].CGPA);
}
