#include<stdio.h>

int main()
{
    int k, range1,range2;
    printf("Enter the range : ");
    scanf("%d %d", &range1, &range2);
    for(k=range1; k<=range2; k++)
    {
        int i,n=k;
        //scanf("%d", &n);
        printf("%d!=", n);
        int fact=1;
        for(i=n; i>=1; i--)
        {
            printf("%d",i);
            fact=fact*i;
            if(i!=1)
            {
                printf("x");
            }

        }
        printf("=%d ", fact);
         printf("\n");
    }
}
