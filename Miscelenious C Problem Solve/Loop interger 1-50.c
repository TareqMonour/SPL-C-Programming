#include<stdio.h>
int main()
{

    int sum, count;
    sum=0;
    for(count=1; count<=50; count++)
    {
        if(count%2==0)
        {
            sum+=count;
        }
    }
     printf("%d", sum);
    return 0;
}
