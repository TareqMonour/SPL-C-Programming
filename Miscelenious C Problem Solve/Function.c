#include<stdio.h>
int main()
{
    char s[80];
    char t[80];
    gets(s);
    strcpy(t,s);
    strrev(t);

    if(strcmpi(s,t)==0)
    {
        printf("%s is a palindrome",s);
    }
    else
    {
        printf("%s is not a palindrome",s);
    }
    return 0;
}
