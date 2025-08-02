#include<stdio.h>
int main()
{
    char str_a[100]= "Hello";
    char str_b[]= "hello";
    char str_c[]= {[0]:'c' , [1]:'o' , [2]:'d' , [3]:'e' , [4]:'\0'};

    printf("%c", str_a[2]);
    printf("%s", str_a);
    puts(str_c);






    int i = 0;

    while (str_a[i]!='\0')
    {
        printf("%c - " , str[i]);
        i++;
    }
    //Should find lenth of a string

    return 0;
}

