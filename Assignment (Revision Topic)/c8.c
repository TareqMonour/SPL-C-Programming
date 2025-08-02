#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any Character: ");
    scanf("%c", &ch);

     if(ch >= 'a' && ch <= 'z')
    {
     printf("%c is Lowercase Alphabet.", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
     printf("%c is Uppercase Alphabet.", ch);
    }
    else
    {
        printf("%c is not an Alphabet.", ch);
    }

    return 0;
}
