#include<stdio.h>
int main()
{
    int n,m,o,t;
    char s[20];
    printf("====================================\n");
    printf("|                                  |\n");
    printf("|            -----------           |\n");
    printf("|            BUS SHEDUL            |\n");
    printf("|            -----------           |\n");
    printf("|                                  |\n");
    printf("====================================\n");
    printf("\n");
    printf("1.VIEW ALL AVAILABLE BUS/TIME/REAT\n");
    printf("2.DO YOU WANT TO GO TO DSC FROM YOUR DESTINATION ?\n");
    printf("3.DO YOU WANT TO GO TO YOUR DESTINATION FROM DSC ?\n");
    printf("N.B:IF YOU ARE A STUDENT YOU GET HALF FARE\n");
    printf("\n");
    printf("SELECT ANY NTMBER TO GET THE ABOVE INFORMATION : \n");

    scanf("%d",&n);


    if(n==1)
    {
        printf("CHOOSE FROM HERE TO GO TO DESTINATION FROM DSC....\n");
        printf("\n");
        printf("  BUS N0:                      DESTINATION                         TIME TO GO              REAT\n");
        printf("\n");
        printf("   100.                 DHANMONDI       -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   101.                 UTTARA          -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   102.                 COLLEGE GATE    -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   103.                 ECB CATTOR      -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   104.                 KONABARI        -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   105.                 BAIPAIL         -     DSC                  8.48PM              STUDENT(10),LOCAL(20)   \n");
        printf("   106.                 DHAMRAI STAND   -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   107.                 NARAYANGANJ     -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   108.                 GREEN TOWN      -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   109.                 MIRPUR          -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   110.                 MALIBAG         -     DSC                  8.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("\n");
        printf("CHOOSE FROM HERE TO GO TO DSC FROM DESTINATION....\n");
        printf("\n");
        printf("   111.                 DSC             -     UTTARA               4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   112.                 DSC             -     COLLEGE GATE         4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   113.                 DSC             -     ECB CATTOR           4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   114.                 DSC             -     KONABARI             4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   115.                 DSC             -     BAIPAIL              4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   116.                 DSC             -     DHAMRAI STAND        4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   117.                 DSC             -     NARAYANGANJ          4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   118.                 DSC             -     GREEN TOWN           4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   119.                 DSC             -     MIRPUR               4.45PM              STUDENT(10),LOCAL(20)   \n");
        printf("   120.                 DSC             -     MALIBAG              4.45PM              STUDENT(10),LOCAL(20)   \n");


    }
    else if(n==2)
    {
        printf("CHOICE YOUR BUSE : \n");
        scanf("%d",&m);
        printf("IF YOU ARE A STUDENT PLEASE ENTER 1 nither enter ANY NUMBER :\n");
        scanf("%d",&t);
        printf("HOW MANY SEATS DO YOU NEED : \n");
        scanf("%d",&o);
        if(m==100)
        {
            if(t==1)
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("DHANMONDI         -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("DHANMONDI         -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",20*o);

            }

        }
        else if(m==101)
        {
            if(t==1)
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("UTTARA            -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("UTTARA            -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",20*o);
            }


        }
        else if(m==102)
        {
            if(t==1)
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("COLLEGE GATE      -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("COLLEGE GATE      -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",20*o);
            }


        }
        else if(m==103)
        {
            if(t==1)
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("ECB CATTOR        -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("ECB CATTOR        -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",20*o);
            }


        }
        else if(m==104)
        {
            if(t==1)
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("KONABARI          -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("KONABARI          -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",20*o);
            }


        }
        else if(m==105)
        {
            if(t==1)
            {
                printf("BUS N0            :     (d)\n",m);
                printf("BAIPAIL           -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0          :       (d)\n",m);
                printf("BAIPAIL         -       DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY  :       (%d)TAKA\n",20*o);
            }


        }
        else if(m==106)
        {
            if(t==1)
            {
                printf("BUS N0           :      (%d)\n",m);
                printf("DHAMRAI STAND    -      DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY   :      (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0             :    (%d)\n",m);
                printf("DHAMRAI STAND      -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY     :    (%d)TAKA\n",20*o);
            }


        }
        else if(m==107)
        {
            if(t==1)
            {
                printf("BUS N0           :     (%d)\n",m);
                printf("NARAYANGANJ      -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY   :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0           :     (%d)\n",m);
                printf("NARAYANGANJ      -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY   :     (%d)TAKA\n",10*o);

            }

        }
        else if(m==108)
        {
            if(t==1)
            {
                printf("BUS N0            :      (%d)\n",m);
                printf("GREEN TOWN        -      DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :      (%d)TAKA\n",10*o);

            }
            else
            {
                printf("BUS N0            :     (%d)\n",m);
                printf("GREEN TOWN        -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :     (%d)TAKA\n",20*o);

            }

        }
        else if(m==109)
        {
            if(t==1)
            {
                printf("BUS N0           :      (%d)\n",m);
                printf("MIRPUR           -      DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY   :      (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0            :      (%d)\n",m);
                printf("MIRPUR            -      DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY    :      (%d)TAKA\n",20*o);
            }


        }
        else if(m==110)
        {
            if(t==1)
            {
                printf("BUS N0             :     (%d)\n",m);
                printf("MALIBAG            -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY     :     (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0             :     (%d)\n",m);
                printf("MALIBAG            -     DSC\n");
                printf("8.45PM\n");
                printf("PLEASE YOU PAY     :     (%d)TAKA\n",20*o);
            }


        }

    }
    else if(n==3)
    {
        printf("CHOICE YOUR BUSE : \n");
        scanf("%d",&m);
        printf("IF YOU ARE STUDENT PLEASE ENTER 1 nither enter ANY NUMBER: \n");
        scanf("%d",&t);
        printf("HOW MANY SEATS DO YOU NEED : \n");
        scanf("%d",&o);

        if(m==111)
        {
            if(t==1)
            {
                printf("BUS N0            :    (%d)\n",m);
                printf("DSC               -     DHANMONDI\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY    :    (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0            :    (%d)\n",m);
                printf("DSC               -    DHANMONDI\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY : (%d)TAKA\n",20*o);
            }

        }
        else if(m==112)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC    -  UTTARA\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY : (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC     -  UTTARA\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY :(%d)TAKA\n",20*o);
            }


        }
        else if(m==113)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC     -   COLLEGE GATE\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY :(%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC     -   COLLEGE GATE\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY :(%d)TAKA\n",20*o);
            }


        }
        else if(m==114)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC    -    ECB CATTOR\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY :(%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC    -    ECB CATTOR\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY :(%d)TAKA\n",20*o);
            }


        }
        else if(m==115)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -    KONABARI\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -    KONABARI\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",20*o);
            }


        }
        else if(m==116)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC    -    BAIPAIL\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC    -    BAIPAIL\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",20*o);
            }


        }
        else if(m==117)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -  DHAMRAI STAND\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -  DHAMRAI STAND\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",20*o);
            }


        }
        else if(m==118)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC    -   NARAYANGANJ\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",10*o);

            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC    -   NARAYANGANJ\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",20*o);

            }

        }
        else if(m==119)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -   GREEN TOWN\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",10*o);

            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -   GREEN TOWN\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",20*o);

            }

        }
        else if(m==120)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -   MIRPUR\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -   MIRPUR\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",20*o);
            }


        }
        else if(m==121)
        {
            if(t==1)
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -  MALIBAG\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",10*o);
            }
            else
            {
                printf("BUS N0:(%d)\n",m);
                printf("DSC   -  MALIBAG\n");
                printf("4.45PM\n");
                printf("PLEASE YOU PAY (%d)TAKA\n",20*o);
            }


        }
    }
    return 0;

}
