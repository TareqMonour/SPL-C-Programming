#include<stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    for(int i=0;i<=strlen(ch);i++)
    {
        for(int j=i+1;j<strlen(ch);j++)
        {
            if(ch[i]>ch[j])
            {
                char temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;

            }
        }
    }
    printf("%s",ch);
    //for(int i=0;i<strlen(ch);i++)
        //printf()




}
