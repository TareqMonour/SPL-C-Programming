#include <stdio.h>
int main()
{
    int Candiate_age;
    printf("Input the age of the Candidate: ");
    scanf("%d", &Candiate_age);
    if (Candiate_age < 18)
    {
     printf("Extremely Sorry, You are not Eligible to Caste your Vote.\n");
     printf("You will be able to Caste your Vote after %d year\n", 18-Candiate_age);
    }
    else
    {
     printf("Congratulation!! You are Eligible for Casting the Vote");
    }

    return 0;
}
