#include<stdio.h>
int main()
{
    int i;
    int temp =1;
    int num[10];

    for(i=0; i<=9; i++)
    {
        if(i%2==0)
        {
            num[i]=10;
        }

        else
        {
            num[i]=temp;
            temp=temp+i;
        }
    }
     printf("%d", num[i]);

}
