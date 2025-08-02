//Pascals Triangle
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the input : ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num-i+1; j++)
        {
            printf(" ");
        }

        int k;

        for(k = i ; k <= (2*i)-1 ; k++)
        {
            pvrintf("%d",k);
        }

        for(k=k-2; k>=i  ; k--)
        {
            printf("%d",k);
        }

        printf("\n");
    }

    return 0;
}
