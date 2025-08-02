#include <stdio.h>
int main()
{
    int phy, chem,math, total, math_phy;
    printf("Eligibility Criteria for an Engineering: \n");
    printf("Marks in Mathematics >= 65\n");
    printf("Marks in Physics >= 55\n");
    printf("Marks in Chemistry >= 50\n");
    printf("Total in all Three Subject >= 180\n");
    printf("or Total in Mathematics and Physics >= 140\n");
    printf("------------------------------------------\n");

    printf("Input the marks obtained in math, phy, chem : ");
    scanf("%d %d %d", &math, &phy, &chem);
    printf("Total marks of Mathematics, Physics and Chemistry : %d\n", math + phy + chem);
    printf("Total marks of Maths and  Physics : %d\n", math + phy);
    if (math>=65)

        if(phy>=55)

            if(chem>=50)

                if((math + phy + chem) >= 180 || (math + phy) >= 140)

                    printf("The  Candidate is Eligible for Admission.\n");
                else
                    printf("The Candidate is not Eligible.\n");
            else
                printf("The Candidate is not Eligible.\n");
        else
            printf("The Candidate is not Eligible.\n");
    else
        printf("The Candidate is not Eligible.\n");

 return 0;
}

