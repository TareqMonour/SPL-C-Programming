#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], str3[100];
    gets(str1);
    scanf("%s", str2);
    strncpy(str3, str1,8);
    //printf("%c", str3);
    strncat(str2, str3,4);
    strcpy(str3, str2);
    strncat(str3, str1,3);
    if (strcmp(str2, str3)>0)
    strncpy(str1, str3,2);
    else strncpy(str2, str3,2);
}
