#include <stdio.h>
int main()

{
    int n;
    printf("Enther the Square Matrix:\n");
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Major Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    printf("\nMinor Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j==n-i-1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}

