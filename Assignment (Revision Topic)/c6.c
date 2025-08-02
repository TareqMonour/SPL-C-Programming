#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any Character: ");
    scanf("%c", &ch);

    printf("It is %s", (((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? "Alphabet" : "not Alphabet") );

    return 0;

}
