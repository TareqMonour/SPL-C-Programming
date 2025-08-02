#include<stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    int sum=0;
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]>='0'&&ch[i]<='9')
            sum=sum+(ch[i]-48);
    }
    printf("%d",sum);
}
