#include<stdio.h>
int main()
{
    int arr[100];
    int n, i, j, max, count=0, index;
    printf("Enter the number : ");
    scanf("%d", &n);
   if(i<=100)
   {
       for(i=0; i<=n; i++)
        {
            scanf("%d", &arr[i]);
        }

        max=arr[0];
        for(j=1; j<=n; j++)
        {
            count++;
            if(max<arr[i])
            {
                max=arr[i];
                count=index;
            }
        }
        printf("%d%d", max, index);
   }

    return 0;
}
