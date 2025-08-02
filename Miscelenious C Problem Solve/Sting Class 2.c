#include<stdio.h>
int main()
{
    /*char s = 'm';
    char t = 'z' - 'y';
    //--> int res = ascii(z) - ascii (y)
    // chat t = (char) res
    printf("%d\n",s); //int
    printf("%c\n",s); //m
    printf("%c\n",(s+1)); //n
    printf("%d\n",(s+1)); //ascii(n)
    printf("%d\n",t);

 return 0; */

 char upper,lower;
 int ascii;
 //convet to lower case
 printf("Enter the upper case number: ");
 scanf("%c",&upper);
 ascii=upper+('a' - 'A');
 printf("%c",ascii);

 return 0;
}
