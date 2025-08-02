#include <stdio.h>
#include <string.h>

void dataInput();
void viewOnly();

int logIn(char id[], char pass[])
{
    char saved_id[20] = "admin";
    char saved_pass[20] = "admin";

    int idCheck = strcmp(saved_id,id);
    int passCheck = strcmp(saved_pass,pass);

    if (idCheck == 0 && passCheck == 0)
    {
        int n;
        printf("\nLogin Successful.\nYou logged in as an admin.\n\n");
        printf("Enter serial number for next action.\n--> For view info type (1)\n--> For update info type (2)\n");
        printf("==> Enter serial: ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            viewOnly();
            break;

        case 2:
            dataInput();
            break;

        default:
            printf("\nWrong command inputed...\n");

        }
    }
    else
    {
        printf("\n!!!Invalid username or password!!!");
    }

}
void dataInput()
{
    char date[20];
    fflush(stdin);
    printf("\nEnter date(dd/mm/yy): ");
    gets(date);
    fflush(stdin);
    int cost,meal,totalCost,totalMeal;

    for(int i=1; i<=2; i++)
    {
        printf("\nEnter member%d's info -> \n",i);
        printf("Enter todays meal: ");
        scanf("%d",&meal);
        printf("Enter todays cost: ");
        scanf("%d",&cost);
        if(i==1)
        {
            FILE *fin;
            fin = fopen("member1.txt","a");
            fprintf(fin,"\nDate: %s",date);
            fprintf(fin,"\nMeal: %d",meal);
            fprintf(fin,"\nCost: %d\n\n",cost);
            fclose(fin);


            FILE *f_amount;
            f_amount = fopen("member1_amount.txt","r");
            fscanf(f_amount,"%d",&totalMeal);
            fscanf(f_amount,"%d",&totalCost);
            fclose(f_amount);

            totalMeal = totalMeal + meal;
            totalCost = totalCost + cost;

            FILE *f_amount_write;
            f_amount_write = fopen("member1_amount.txt","w");
            fprintf(f_amount,"%d\n%d",totalMeal,totalCost);
            fclose(f_amount_write);

            FILE *newInfo;
            newInfo = fopen("member1_updated_info.txt","w");

            fprintf(newInfo,"\nMember1's info->\nTotal Meal: %d\nTotal Cost: %d\n",totalMeal,totalCost);

            fclose(newInfo);



        }
        else if(i==2)
        {
            FILE *fin;
            fin = fopen("member2.txt","a");
            fprintf(fin,"\nDate: %s",date);
            fprintf(fin,"\nMeal: %d",meal);
            fprintf(fin,"\nCost: %d\n\n",cost);

            fclose(fin);

            FILE *f_amount;
            f_amount = fopen("member2_amount.txt","r");
            fscanf(f_amount,"%d",&totalMeal);
            fscanf(f_amount,"%d",&totalCost);
            fclose(f_amount);

            totalMeal = totalMeal + meal;
            totalCost = totalCost + cost;

            FILE *f_amount_write;
            f_amount_write = fopen("member2_amount.txt","w");
            fprintf(f_amount,"%d\n%d",totalMeal,totalCost);
            fclose(f_amount_write);

            FILE *newInfo;
            newInfo = fopen("member2_updated_info.txt","w");

            fprintf(newInfo,"\nMember2's info->\nTotal Meal: %d\nTotal Cost: %d\n",totalMeal,totalCost);

            fclose(newInfo);

        }
    }


}

void viewOnly()
{
    int n;
    printf("\nEnter the serial number accordingly to view info.\n");
    printf("--> 1) Member1\n");
    printf("--> 2) Member2\n");
    printf("==> Enter serial number: ");
    fflush(stdin);
    scanf("%d",&n);
    fflush(stdin);

    if(n==1)
    {
        FILE *rf;
        rf = fopen("member1_updated_info.txt","r");
        char ch;
        while(!feof(rf))
        {
            ch = fgetc(rf);
            printf("%c",ch);
        }
        fclose(rf);
    }
    else if(n==2)
    {
        FILE *rf;
        rf = fopen("member2_updated_info.txt","r");
        char ch;
        while(!feof(rf))
        {
            ch = fgetc(rf);
            printf("%c",ch);
        }
        fclose(rf);
    }
    else{
        printf("\nWrong command inputed...\n");
    }

}



void header()
{
    printf("\t\t========= MESS MANAGEMENT SYSTEM =========\n");
    printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
}


void footer()
{
    printf("\n\n\t\t=============== THANK YOU! ===============\n");
    printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}


int main()
{
    header();

    /// ==== Getting login Info ====
    char id[20],pass[20];
    printf("Enter User ID: ");
    gets(id);
    printf("Enter Password: ");
    gets(pass);

    /// === Login Function Call ===
    logIn(id,pass);


    footer();
    return 0;
}


