#include<stdio.h>
int main()
{
    int phy, chem, math, comp;
    float percentage;
    printf("Enter the Marks of all Four Subjects : ");
    scanf("%d%d%d%d", &phy, &chem, &math, &comp);

    //Calculate Percentage
    percentage = (phy + chem + math + comp) / 4.0;
    //Here use 4.0, instead of 4 to avoid integer division.

    printf("Percentage = %f\n", percentage);

    //Finding grade
    if(percentage >= 90)
    {
        printf("Grade A");
    }
    else if(percentage >= 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 70)
    {
        printf("Grade C");
    }
    else if(percentage >= 60)
    {
        printf("Grade D");
    }
    else if(percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
