#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
for(i=n;i>0;i--)
{
int y=2*i;
for(j=i;j>0;j--)
{
printf("%d ",y);
y-=2;
}
printf("\n");
}


}
