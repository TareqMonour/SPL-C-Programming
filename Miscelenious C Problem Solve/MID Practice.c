//MID Summer'22 4(a):

/*#include<stdio.h>
int main()
{
    int F[6]= {0};
    int i, n=3;
    for(i=0; i<6; i++)
    {
        F[i]= n+i;
        if(F[i]%2==0)
        {
            F[i]*=2;
        }
        printf("%d ", F[i]);
    }


    return 0;
}
*/

//MID Summer'22 3(b):

#include<stdio.h>
int main()
{
    int n,i, count=0;
    float avg, sum=0;


    for(i=1; i>0; i++)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        count++;
        sum=sum+n;
        avg=sum/count;
    }
    printf("Avg is: %f\n", avg);

}
