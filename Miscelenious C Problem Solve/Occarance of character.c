#include<stdio.h>
int main()
{
    char x, ch[100],c1,c2;
    gets(ch);
    scanf("%c",&x);
    if(x<='z'&&x>='a')
    {
        c1=x;
        c2=x-32;
    }
    else
    {
        c1=x;
        c2=x+32;
    }
    int c=0;
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]==c1||ch[i]==c2)
            c++;
    }
    printf("%d",c);

}
