/* Solve of the problem 3 */

#include<stdio.h>
int main()
{
    int X,n1,n2,n3;

    printf("Enter the number is: ");
    scanf("%d",&X);

    scanf("%d",&n1);
    if(X==n1)
    {
        printf("Right ,Player 2 win\n");
    }
    else
    {
        printf("Wrong, 2 Chances left\n");
        scanf("%d",&n2);

    if(X==n2)
        {
            printf("Right, Player 2 win\n");
        }
        else
        {
            printf("Wrong, 1 Chance left\n");
            scanf("%d",&n3);
            if(X==n3)
            {
                printf("Right, Player 2 win\n");
            }
            else
            {
                printf("Wrong, 0 Chance Left\n");
                printf("Player 1 win \n");
            }

        }
    }

    return 0;
}
