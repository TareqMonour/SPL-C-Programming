#include <stdio.h>
unsigned long long fibo(int num);

int main()
{
    int num;
    unsigned long long fibonacci;

    printf("Enter Any Number to Find nth Fiboacci Term: ");
    scanf("%d", &num);

    fibonacci = fibo(num);

    printf("%d Fibonacci Term is %llu", num, fibonacci);

    return 0;
}

unsigned long long fibo(int num)
{
    if(num == 0)      //Base condition
        return 0;
    else if(num == 1) //Base condition
        return 1;
    else
        return fibo(num-1) + fibo(num-2);
}
