#include<stdio.h>
int main()
{
    char ch1[100],ch2[10];
    gets(ch1);
    gets(ch2);
    int len2=strlen(ch2),c2=0;
    for(int i=0; i<strlen(ch1); i++)
    {
        if(ch1[i]==' ')
        {
            int k=0,c1=0;
            for(int j=i-len2; j<i; j++)
            {
                if(ch2[k++]==ch1[j])
                    c1++;
            }
            if(c1==len2)
                c2++;
        }

    }
    printf("%d",c2);
    main();
}
