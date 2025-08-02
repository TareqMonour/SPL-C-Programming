#include<stdio.h>
int main()
{
    int i, n, j, number=1;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(number>9)
            {
                number=1;
            }
            printf("%d",number);
            number++;
        }

        printf("\n");
    }
    return 0;
}
