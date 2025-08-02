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
            printf("%d",k);
        }

        for(k=k-2; k>=i  ; k--)
        {
            printf("%d",k);
        }

        printf("\n");
    }

    return 0;
}


/*#include<stdio.h>
int main()
{
    int i, j, temp1, temp2, num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        temp1=i;
        for(j=1; j<=num; j++)
        {
            if(temp1>9)
            {
                temp1=1;
            }
            if(j>=num-i+1)
            {
                printf("%d",temp1);
                temp1++;
            }
            else
            {
                printf(" ");
            }
        }
        temp2=temp1-2;
        for(j=1; j<=num; j++)
        {
            if(j==1)
            {
                continue;
            }
            if(j<=i)
            {
                printf("%d", temp2);
                temp2--;
            }
            if(i<=0)
            {
                temp2=9;
            }
        }
        printf("\n");
    }
    return 0;
}
*/


