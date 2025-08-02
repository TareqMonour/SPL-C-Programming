
#include <stdio.h>
int main()
{
    char charr;
    int intt;
    float floatt;
    short shortt;
    long longg;
    double doublee;

    printf("Size of char: %d byte\n", sizeof(charr));
    printf("Size of int: %d bytes\n", sizeof(intt));
    printf("Size of float: %d bytes\n", sizeof(floatt));
    printf("Size of Short: %d bytes\n", sizeof(shortt));
    printf("Size of long: %d bytes\n", sizeof(longg));
    printf("Size of double: %d bytes", sizeof(doublee));
    return 0;
}
