#include<stdio.h>
int main()
{
    int array[3] = {1,2,3};
    int total=0;
    for(int i=0; i<3; i++)
    {
        total+=array[i];
    }

    printf("total = %d\n",total);

    return 0;
}
