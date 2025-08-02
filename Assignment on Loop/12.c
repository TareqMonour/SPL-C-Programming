/*
#include<stdio.h>
    int main() {
    int num, rev = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);

     while (num > 0)
    {
      rev = rev * 10;
      rev = rev + num % 10;
      num = num / 10;
    }
    printf("Reversed number is = %d ", rev);
    return 0;
}

*/
#include<stdio.h>
    int main()
  {
    int num, rev;
    printf("Please enter a number: ");
    scanf("%d", &num);
    for (rev = 0; num > 0; num = num / 10)
    {
      rev = rev * 10;
      rev = rev + num % 10;
    }
    printf("Reversed number is = %d", rev);
    return 0;
  }
