#include<stdio.h>
int main()
{

    printf("\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =           GALGOTIAS UNIVERSITY            =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t\t Expenditure budget of Galgotias university");
    int choice;
    while(1)
    {
        printf("\n\n\t1. Maintenance \n");
        printf("\t2. Electricity\n");
        printf("\t3. IT infrastructures\n");
        printf("\t4. Lab infrastructures\n");
        printf("\t5. Hostel \n");
        printf("\t6. Internet\n");
        printf("\tEnter your choice :  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\t\t\ti. Building maintenance\n");
                printf("\t\t\tii. Mess maintenance\n");
                printf("\t\t\tiii. Gardening/Horticulture\n");
                printf("\t\t\tiv. Housekeeping\n");
                printf("\t\t\tv. Appliances\n");
                break;

            case 2:
                printf("\t\t\ti.IT Labs \n");
                printf("\t\t\tii. Non IT Labs\n");
                printf("\t\t\tiii. Classroom\n");
                printf("\t\t\tiv. Gadget offices\n");
                printf("\t\t\tv. Faculty cabins\n");
                printf("\t\t\tvi. Library\n");
                printf("\t\t\tvii. Premises\n");
                break;

            case 3:

                break;

            case 4:

                exit(0);    // terminates the complete program execution
        }
    }

    return 0;
}
