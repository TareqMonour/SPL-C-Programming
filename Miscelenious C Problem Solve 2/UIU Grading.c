#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark :");
    scanf("%d", &mark);
    if(mark>=90 && mark<=100)
    {
        printf("A");
    }
     if(mark>=86 && mark<=89)
    {
        printf("A-");
    }
    if(mark>=82 && mark<=85)
    {
        printf("B+");
    }
    if(mark>=78 && mark<=81)
    {
        printf("B");
    }
    if(mark>=74 && mark<=77)
    {
        printf("B-");
    }
     if(mark>=70 && mark<=73)
    {
        printf("C+");
    }
     if(mark>=66 && mark<=69)
    {
        printf("C");
    }
     if(mark>=62 && mark<=65)
    {
        printf("C-");
    }
     if(mark>=58 && mark<=61)
    {
        printf("D+");
    }
     if(mark>=55 && mark<=58)
    {
        printf("D");
    }
     if(mark<55)
    {
        printf("F");
    }
    return 0;
}
