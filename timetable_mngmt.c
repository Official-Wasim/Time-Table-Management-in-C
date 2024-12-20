#include<stdio.h>
#include<conio.h>
#include<string.h>
//declaring the functions used
void table_time();
void student();
void teach_view();
void stud_view();
void log_l();
void login();
void temp_tt();
void daily_view();
void stud_repeat();
void edit();

//the main function which calls other function and welcomes the user
int main()
{
    char table[16][50][17];
    int user_ipt, user_ipt1,user_ipt2,return_1;
    printf("***************************** Welcome to Time table management window *****************************\n");
    printf("-----------------------------------------------------------------------------------------------------");
    log_l();
    return 0;
}
//function for printing the  time table
void table_time()
{
    char table[7][37][17]={
        { {" Time"},{" "},{" 7:45"},{" "},{" "},{" 8:35"},{" "},{" "},{" 9:25"},{" "},{" 10:15"},{" -"},{" 10:35"},{" "},{" 10:35"},{" "},{" "},{" 11:25"},{" "},{" "},{" 12:15"},{" "},{" "},{" 13:05"},{" "},{" "},{" "},{" "},{" SY"},{" 7:45-"},{" 10:15"},{" TY"},{" 10:35-"},{" 13:05"},{" FY"},{" 13:25-"},{" 15:55"} },
        { {" Monday"},{"RUSCS501-MA N319"},{"-"},{"-"},{"RUSCS501-MA N319"},{"-"},{"-"},{"RUSCS504-PR N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS304-PR N421"},{"RUSCS107-PJ N117"},{"-"},{"RUSCS304-PR N421"},{"RUSCS107-PV N117"},{"-"},{"RUSCS306-MA N117"},{"RUSCS101-PV N117"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"PR & RM"},{"RUSCSP304"},{" "},{"RM & KP"},{"RUSCSP505"},{" "},{"KP & PR "},{"RUSCSP105 "},{" "} },
        { {" Tuesday"},{"RUSCS504-PR N319"},{"-"},{"-"},{"RUSCS503-PV N319"},{"-"},{"-"},{"RUSCS504-PR N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS304-PR N421"},{"RUSCS102-RM N117"},{"-"},{"RUSCS304-PR N421"},{"RUSCS102-RM N117"},{"-"},{"RUSCS302-PR N421"},{"RUSCS102-RM N117"},{"-"},{"-"},{"-"},{"-"},{" "},{"          P R"},{" "},{"KP & PV"},{"RUSCSP305"},{" "},{" "},{" "},{" "},{"MS & MA "},{"RUSCSP104 "},{" "} },
        { {" Wednesday"},{"RUSCS502-MS N319"},{"-"},{"-"},{"RUSCS503-PV N319"},{"-"},{"-"},{"RUSCS502-MS N319"},{"-"},{"-"},{" "},{" R E C E S S "},{" "},{"RUSCS306-MA N421"},{"RUSCS101-PV N117"},{"-"},{"RUSCS306-MA N319"},{"RUSCS105-KP N117"},{"-"},{"RUSCS301-KP N421"},{"RUSCS103-PV N117"},{"-"},{"RUSCS301-KP N117"},{"-"},{"-"},{" "},{"A C T I C A L S"},{" "},{"MA & PV"},{"RUSCSP303"},{" "},{" "},{" "},{" "},{"RM & KP "},{"RUSCSP102 "},{" "} },
        { {" Thursday"},{"RUSCS505-RM N319"},{"-"},{"-"},{"RUSCS505-RM N319"},{"-"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS303-PV N421"},{"RUSCS105-KP N117"},{"-"},{"303-PV N421"},{"105-KP N117"},{"-"},{"RUSCS302-PR N421"},{"RUSCS102-RM N117"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"EJ & KP"},{"RUSCSP307"},{" "},{" "},{" "},{" "},{"PR & PV "},{"RUSCSP101 "},{" "} },
        { {" Friday"},{"-"},{"-"},{"-"},{"RUSCS501-MA N319"},{"-"},{"-"},{"RUSCS501-MA N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS305-KP N421"},{"RUSCS107-PR N117"},{"-"},{"RUSCS305-KP N421"},{"RUSCS106-EJ N117"},{"-"},{"RUSCS302-PR N421"},{"RUSCS107-EJ N117"},{"-"},{"RUSCS105-KP LAB"},{"-"},{"-"},{" "},{" "},{" "},{"PR & RM"},{"RUSCSP302"},{" "},{" "},{" "},{" "},{"KP & PV "},{"RUSCSP103 "},{" "} },
        { {" Saturday"},{"RUSCS501-MS N319"},{"-"},{"-"},{"RUSCS503-MS N319"},{"-"},{"-"},{"RUSCS503-MS N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS301-KP N421"},{"RUSCS104-MS N117"},{"-"},{"RUSCS305-KP N421"},{"RUSCS104-MS N117"},{"-"},{"RUSCS306-MA N421"},{"RUSCS103-PV N117"},{"-"},{"RUSCS103-PV N117"},{"-"},{"-"},{" "},{" "},{" "},{"MA & MS"},{"RUSCSP306"},{"1:25PM-3:55PM"},{"EJ"},{"RUSCSP506"},{" "},{"EJ & PR "},{"RUSCSP106 "},{"7.45AM-10.15AM "} },
    };
    // draw table
    int i, j,k;
    for(j=0;j<37;j++)
    {
        for(i=0;i<7;i++)
        {
            printf("%-17s",table[i][j]);
            printf("|");
        }
        printf("\n");
        if(j%3==0)
        {
            for ( i = 0; i <7; i++)
            {
                printf("==================");
            }
            printf("\n");
        }

    }
}
//function created to print the timetable which will be used for editing
void temp_tt()
{

    char table[7][37][17]={
        { {" Time"},{" "},{" 7:45"},{" "},{" "},{" 8:35"},{" "},{" "},{" 9:25"},{" "},{" 10:15"},{" -"},{" 10:35"},{" "},{" 10:35"},{" "},{" "},{" 11:25"},{" "},{" "},{" 12:15"},{" "},{" "},{" 13:05"},{" "},{" "},{" "},{" "},{" SY"},{" 7:45-"},{" 10:15"},{" TY"},{" 10:35-"},{" 13:05"},{" FY"},{" 13:25-"},{" 15:55"} },
        { {" Monday"},{"RUSCS501-MA N319"},{"-"},{"-"},{"RUSCS501-MA N319"},{"-"},{"-"},{"RUSCS504-PR N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS304-PR N421"},{"RUSCS107-PJ N117"},{"-"},{"RUSCS304-PR N421"},{"RUSCS107-PV N117"},{"-"},{"RUSCS306-MA N117"},{"RUSCS101-PV N117"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"PR & RM"},{"RUSCSP304"},{" "},{"RM & KP"},{"RUSCSP505"},{" "},{"KP & PR "},{"RUSCSP105 "},{" "} },
        { {" Tuesday"},{"RUSCS504-PR N319"},{"-"},{"-"},{"RUSCS503-PV N319"},{"-"},{"-"},{"RUSCS504-PR N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS304-PR N421"},{"RUSCS102-RM N117"},{"-"},{"RUSCS304-PR N421"},{"RUSCS102-RM N117"},{"-"},{"RUSCS302-PR N421"},{"RUSCS102-RM N117"},{"-"},{"-"},{"-"},{"-"},{" "},{"          P R"},{" "},{"KP & PV"},{"RUSCSP305"},{" "},{" "},{" "},{" "},{"MS & MA "},{"RUSCSP104 "},{" "} },
        { {" Wednesday"},{"RUSCS502-MS N319"},{"-"},{"-"},{"RUSCS503-PV N319"},{"-"},{"-"},{"RUSCS502-MS N319"},{"-"},{"-"},{" "},{" R E C E S S "},{" "},{"RUSCS306-MA N421"},{"RUSCS101-PV N117"},{"-"},{"RUSCS306-MA N319"},{"RUSCS105-KP N117"},{"-"},{"RUSCS301-KP N421"},{"RUSCS103-PV N117"},{"-"},{"RUSCS301-KP N117"},{"-"},{"-"},{" "},{"A C T I C A L S"},{" "},{"MA & PV"},{"RUSCSP303"},{" "},{" "},{" "},{" "},{"RM & KP "},{"RUSCSP102 "},{" "} },
        { {" Thursday"},{"RUSCS505-RM N319"},{"-"},{"-"},{"RUSCS505-RM N319"},{"-"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS303-PV N421"},{"RUSCS105-KP N117"},{"-"},{"303-PV N421"},{"105-KP N117"},{"-"},{"RUSCS302-PR N421"},{"RUSCS102-RM N117"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"EJ & KP"},{"RUSCSP307"},{" "},{" "},{" "},{" "},{"PR & PV "},{"RUSCSP101 "},{" "} },
        { {" Friday"},{"-"},{"-"},{"-"},{"RUSCS501-MA N319"},{"-"},{"-"},{"RUSCS501-MA N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS305-KP N421"},{"RUSCS107-PR N117"},{"-"},{"RUSCS305-KP N421"},{"RUSCS106-EJ N117"},{"-"},{"RUSCS302-PR N421"},{"RUSCS107-EJ N117"},{"-"},{"RUSCS105-KP LAB"},{"-"},{"-"},{" "},{" "},{" "},{"PR & RM"},{"RUSCSP302"},{" "},{" "},{" "},{" "},{"KP & PV "},{"RUSCSP103 "},{" "} },
        { {" Saturday"},{"RUSCS501-MS N319"},{"-"},{"-"},{"RUSCS503-MS N319"},{"-"},{"-"},{"RUSCS503-MS N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS301-KP N421"},{"RUSCS104-MS N117"},{"-"},{"RUSCS305-KP N421"},{"RUSCS104-MS N117"},{"-"},{"RUSCS306-MA N421"},{"RUSCS103-PV N117"},{"-"},{"RUSCS103-PV N117"},{"-"},{"-"},{" "},{" "},{" "},{"MA & MS"},{"RUSCSP306"},{"1:25PM-3:55PM"},{"EJ"},{"RUSCSP506"},{" "},{"EJ & PR "},{"RUSCSP106 "},{"7.45AM-10.15AM "} },
    };
    // draw table
    int i, j,k;
    for(j=0;j<37;j++)
    {
        for(i=0;i<7;i++)
        {
            printf("%-17s",table[i][j]);
            printf("|");
        }
        printf("\n");
        if(j%3==0)
        {
            for ( i = 0; i <7; i++)
            {
                printf("==================");
            }
            printf("\n");
        }

    }
}



//function which asks the user whether to return to the main screen
void student()
{
    int return_1;
    printf("Do you want to return to the main screen ?\n1. Yes\n2. No\n");
    scanf("%d",&return_1);
    printf("-----------------------------------------------------------------------------");


        if (return_1 == 1)
    {
        log_l();
    }
    else if (return_1 == 2)
    {
        printf("\nThank you for using our time table management system\n");
        printf("-----------------------------------------------------------------------------");

    }
    else
    {
        printf("Sure you have selected the correct option...!\n");
        printf("-----------------------------------------------------------------------------");
        student();
    }
}

//function asking for students input
void stud_view()
{
    int user_ipt1;
    printf("\nDo you want to view weekly or daily timetable ?\n1. Weekly\n2. Daily\n");
    scanf("%d",&user_ipt1);
    printf("-----------------------------------------------------------------------------");
    if (user_ipt1 == 1)
    {
        printf("\nPrinting the timetable......\n");
        printf("\n-----------------------------------------------------------------------------\n");
        table_time();
        student();
    }
    else if (user_ipt1 == 2)
    {
        daily_view();
    }
    else
    {
        printf("Are you sure you have selected the correct option...?");
        printf("\n-----------------------------------------------------------------------------");
        stud_view();
    }

}

//function asking for teachers input
void teach_view()
{
    int user_ipt2,user_choice;
    printf("\nDo you want to view or edit the time table ?\n1. View\n2. Edit\n");
    scanf("%d",&user_ipt2);
    printf("-----------------------------------------------------------------------------\n");

    if (user_ipt2 == 1)
    {
        printf("\nPrinting the timetable......\n");
        printf("-----------------------------------------------------------------------------\n");
        temp_tt();
        cont:
        printf("Do you want to edit ?\n1. Yes\n2. No\n ");
        scanf("%d",&user_choice);
        printf("-----------------------------------------------------------------------------\n\n");

        if(user_choice == 1)
        {
            teach_view();
        }
        else if(user_choice = 2)
        {

            student();
        }
        else
        {
            goto cont;
        }

    }
    else if (user_ipt2 == 2)
    {
        edit();
        edit();
    }
    else
    {
        printf("Sure you have selected the correct option...!\n");
        printf("-----------------------------------------------------------------------------");
        teach_view();
    }

}

//function for main screen
void log_l()
{

    int user_ipt;
    printf("\nAre you a student or teacher?\n1. Student\n2. Teacher\n ");
    scanf("%d",&user_ipt);
    printf("-----------------------------------------------------------------------------");
        if (user_ipt == 1)
        {
            stud_view();
        }
        else if (user_ipt == 2)
        {
            login();
        }
        else
        {
            printf("Sure you have selected the correct option...!");
            printf("\n-----------------------------------------------------------------------------");
            log_l();
        }

}

//function for teachers login screen
void login()
{
    char user_name[20];


    User:
    printf("\nEnter your Name: ");
    scanf("%s", &user_name);


    {
    if( strcmp(user_name,"megha")==0)
    {
        goto pass;
    }
    else if( strcmp( user_name,"edith" )==0)
    {
        goto pass;
    }
    else if( strcmp(user_name,"priyanka" )==0)
    {
        goto pass;
    }
    else if( strcmp(user_name,"kiran" )==0)
    {
        goto pass;
    }
    else if( strcmp(user_name,"pooja" )==0)
    {
        goto pass;
    }
    else if( strcmp(user_name,"rasika" )==0)
    {
        goto pass;
    }
    else if( strcmp(user_name,"mahavir")==0)
    {
        goto pass;
    }
    else
    {
        printf("You have enetred an invalid user id\nPlease enter id again\n");
        printf("\n-----------------------------------------------------------------------------");
        goto User;
    }
    char pass[50];
    pass:
    printf("\nEnter your password: ");
    scanf("%s", &pass);
    if(strcmp(pass,"admin")==0)
    {
        teach_view();

    }
    else
    {
        printf("You have entered a wrong password\nEnter your password again\n");
        printf("\n-----------------------------------------------------------------------------");
        goto pass;
    }
    }

}

//function to display timetable in daily format
void daily_view()
{

    int user_sub,user_sub1;
    int i, j, k;
    char table[16][50][17]={
    // time
    { {" Time"},{"================"},{" "},{" 7:45"},{" "},{"================"},{" "},{" 8:35"},{" "},{"================"},{" "},{" 9:25"},{" "},{"================"},{" 10:15"},{" -"},{" 10:35"},{"================"},{" "},{" 10:35"},{" "},{"================"},{" "},{" 11:25"},{" "},{"================"},{" "},{" 12:15"},{" "},{"================"},{" "},{" 13:05"},{" "},{"================"},{" "},{" "},{" "},{"================"},{" SY"},{" 7:45-"},{" 10:15"},{"================"},{" TY"},{" 10:35-"},{" 13:05"},{"================"},{" FY"},{" 13:25-"},{" 15:55"},{"================"} },
     // ver line
    { {"|"},{"="},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="} },
    //MOnday
    { {" Monday"},{"================"},{"RUSCS501-MA N319"},{"-"},{"-"},{"================"},{"RUSCS501-MA N319"},{"-"},{"-"},{"================"},{"RUSCS504-PR N319"},{"-"},{"-"},{"================"},{" "},{"RECESS "},{" "},{"================"},{"RUSCS304-PR N421"},{"RUSCS107-PJ N117"},{"-"},{"================"},{"RUSCS304-PR N421"},{"RUSCS107-PV N117"},{"-"},{"================"},{"RUSCS306-MA N117"},{"RUSCS101-PV N117"},{"-"},{"================"},{"-"},{"-"},{"-"},{"================"},{" "},{"PRACTICALS "},{" "},{"================"},{"PR & RM"},{"RUSCSP304"},{" "},{"================"},{"RM & KP"},{"RUSCSP505"},{" "},{"================"},{"KP & PR "},{"RUSCSP105 "},{" "},{"================"} },
    // ver line
    { {"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="} },
    //Tuesday
    { {" Tuesday"},{"================"},{"RUSCS504-PR N319"},{"-"},{"-"},{"================"},{"RUSCS503-PV N319"},{"-"},{"-"},{"================"},{"RUSCS504-PR N319"},{"-"},{"-"},{"================"},{" "},{"RECESS "},{" "},{"================"},{"RUSCS304-PR N421"},{"RUSCS102-RM N117"},{"-"},{"================"},{"RUSCS304-PR N421"},{"RUSCS102-RM N117"},{"-"},{"================"},{"RUSCS302-PR N421"},{"RUSCS102-RM N117"},{"-"},{"================"},{"-"},{"-"},{"-"},{"================"},{" "},{"PRACTICALS "},{" "},{"================"},{"KP & PV"},{"RUSCSP305"},{" "},{"================"},{" "},{" "},{" "},{"================"},{"MA & MS "},{"RUSCSP104 "},{" "},{"================"} },
    // ver line
    { {"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="} },
    //Wednesday
    { {" Wednesday"},{"================"},{"RUSCS502-MS N319"},{"-"},{"-"},{"================"},{"RUSCS503-PV N319"},{"-"},{"-"},{"================"},{"RUSCS502-MS N319"},{"-"},{"-"},{"================"},{" "},{"RECESS "},{" "},{"================"},{"RUSCS306-MA N421"},{"RUSCS101-PV N117"},{"-"},{"================"},{"RUSCS306-MA N319"},{"RUSCS105-KP N117"},{"-"},{"================"},{"RUSCS301-KP N421"},{"RUSCS103-PV N117"},{"-"},{"================"},{"RUSCS301-KP N117"},{"-"},{"-"},{"================"},{" "},{"PRACTICALS "},{" "},{"================"},{"MA & PV"},{"RUSCSP303"},{" "},{"================"},{" "},{" "},{" "},{"================"},{"RM & KP "},{"RUSCSP102 "},{" "},{"================"} },
    // ver line
    { {"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="} },
    //Thursday
    { {" Thursday"},{"================"},{"RUSCS505-RM N319"},{"-"},{"-"},{"================"},{"RUSCS505-RM N319"},{"-"},{"-"},{"================"},{"-"},{"-"},{"-"},{"================"},{" "},{"RECESS "},{" "},{"================"},{"RUSCS303-PV N421"},{"RUSCS105-KP N117"},{"-"},{"================"},{"303-PV N421"},{"105-KP N117"},{"-"},{"================"},{"RUSCS302-PR N421"},{"RUSCS102-RM N117"},{"-"},{"================"},{"-"},{"-"},{"-"},{"================"},{" "},{"PRACTICALS "},{" "},{"================"},{"EJ & KP"},{"RUSCSP307"},{" "},{"================"},{" "},{" "},{" "},{"================"},{"PV & PR "},{"RUSCSP101 "},{" "},{"================"} },
    // ver line
    { {"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="} },
     //Friday
    { {" Friday"},{"================"},{"-"},{"-"},{"-"},{"================"},{"RUSCS501-MA N319"},{"-"},{"-"},{"================"},{"RUSCS501-MA N319"},{"-"},{"-"},{"================"},{" "},{"RECESS "},{" "},{"================"},{"RUSCS305-KP N421"},{"RUSCS107-PR N117"},{"-"},{"================"},{"RUSCS305-KP N421"},{"RUSCS106-EJ N117"},{"-"},{"================"},{"RUSCS302-PR N421"},{"RUSCS107-EJ N117"},{"-"},{"================"},{"RUSCS105-KP LAB"},{"-"},{"-"},{"================"},{" "},{"PRACTICALS "},{" "},{"================"},{"PR & RM"},{"RUSCSP302"},{" "},{"================"},{" "},{" "},{" "},{"================"},{"PV & KP "},{"RUSCSP103 "},{" "},{"================"} },
    // ver line
    { {"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{"|"},{"|"},{"|"},{"="},{" "},{" "},{" "},{"="},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="} },
    //Saturday
    { {" Saturday"},{"================"},{"-"},{"-"},{"-"},{"================"},{"RUSCS503-MS N319"},{"-"},{"-"},{"================"},{"RUSCS503-MS N319"},{"-"},{"-"},{"================"},{" "},{"RECESS "},{" "},{"================"},{"RUSCS301-KP N421"},{"RUSCS104-MS N117"},{"-"},{"================"},{"RUSCS305-KP N421"},{"RUSCS104-MS N117"},{"-"},{"================"},{"RUSCS306-MA N421"},{"RUSCS103-PV N117"},{"-"},{"================"},{"RUSCS103-PV N117"},{"-"},{"-"},{"================"},{" "},{"PRACTICALS "},{" "},{"================"},{"MA & MS"},{"RUSCSP306"},{"1:25PM-3:55PM"},{"================"},{"EJ"},{"RUSCSP506"},{" "},{"================"},{"EJ & PR "},{"RUSCSP106 "},{"7.45AM-10.15AM "},{"================"} },
    // ver line
    { {"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"|"},{"="} },
    };

    printf("\nWhich day do you want to view ?\n1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n");
    scanf("%d",&user_sub);
    //MONDAY TIMETABLE//
    if(user_sub == 1)
    {
        for (j = 0; j < 50; j++)
        {
            for (i = 0; i < 4; i++)
            {
                if (i % 2 != 0 && i != 0)
                    printf("%0s", table[i][j]);
                else
                    printf("%-16s", table[i][j]);
            }
            printf("\n");
        }
        stud_repeat();
    }


	/* Tuesday*/
    else if(user_sub == 2)
    {
        for (j = 0; j < 50; j++)
        {
            for (i = 0; i < 6; i+=4)
            {
                if (i % 2 != 0 && i != 0)
                    printf("%0s", table[i][j]);
                else
                    printf("%-16s", table[i][j]);
            }
            printf("\n");
        }
        stud_repeat();
    }

	/* Wednesday*/
    else if(user_sub == 3)
    {
        for (j = 0; j < 50; j++)
        {
            for (i = 0; i < 10; i+=3)
            {
                if (i % 2 != 0 && i != 0)
                    printf("%0s", table[i][j]);
                else
                    printf("%-16s", table[i][j]);
            }
            printf("\n");
        }
        stud_repeat();
    }

	/* Thursday*/
    else if(user_sub == 4)
    {
        for (j = 0; j < 50; j++)
        {
            for (i = 0; i < 16; i+=8)
            {
                if (i % 2 != 0 && i != 0)
                    printf("%0s", table[i][j]);
                else
                    printf("%-16s", table[i][j]);
            }
            printf("\n");
        }
        stud_repeat();
    }

	/* Friday*/
    else if(user_sub == 5)
	{
	    for (j = 0; j < 50; j++)
        {
            for (i = 0; i < 16; i+=10)
            {
                if (i % 2 != 0 && i != 0)
                    printf("%0s", table[i][j]);
                else
                    printf("%-16s", table[i][j]);
            }
            printf("\n");
        }
        stud_repeat();
	}

	/* Saturday*/
    else if(user_sub == 6)
    {
        for (j = 0; j < 50; j++)
        {
            for (i = 0; i < 16; i+=12)
            {
                if (i % 2 != 0 && i != 0)
                    printf("%0s", table[i][j]);
                else
                    printf("%-16s", table[i][j]);
            }
            printf("\n");
        }
        stud_repeat();
    }
    //WRONG USER INPUT//
    else
    {
        daily_view();
    }

}


//function for asking student for another day in daily_view() function
void stud_repeat()
{
    int user_sub1;
    printf("\nDo you want to continue with another day ?\n1. Yes\n2. No\n");
    scanf("%d",&user_sub1);
    if(user_sub1 == 1)
    {
        daily_view();
    }
    else if(user_sub1 == 2)
    {
        student();
    }
    else
    {
        printf("Sure you have selected the correct option...!");
        printf("\n-----------------------------------------------------------------------------");
        stud_repeat();
    }
}


void edit()
{
    // table
    char table[7][37][17]={
        { {" Time"},{" "},{" 1.)    7:45"},{" "},{" "},{" 2.)    8:35"},{" "},{" "},{" 3.)    9:25"},{" "},{" 4.)    10:15"},{" -"},{"        10:35"},{" "},{" 5.)    10:35"},{" "},{" "},{" 6.)    11:25"},{" "},{" "},{" 7.)    12:15"},{" "},{" "},{" 8.)    13:05"},{" "},{" 9.)"},{" "},{" "},{" 10.)    SY"},{"    7:45-"},{"    10:15"},{" 11.)    TY"},{"    10:35-"},{"    13:05"},{" 12.)    FY"},{"    13:25-"},{"    15:55"} },
        { {" Monday  (1) "},{"RUSCS501-MA_N319"},{"-"},{"-"},{"RUSCS501-MA_N319"},{"-"},{"-"},{"RUSCS504-PR_N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS304-PR_N421"},{"RUSCS107-PJ_N117"},{"-"},{"RUSCS304-PR_N421"},{"RUSCS107-PV_N117"},{"-"},{"RUSCS306-MA_N117"},{"RUSCS101-PV_N117"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"PR & RM"},{"RUSCSP304"},{" "},{"RM & KP"},{"RUSCSP505"},{" "},{" "},{" "},{" "} },
        { {" Tuesday  (2)"},{"RUSCS504-PR_N319"},{"-"},{"-"},{"RUSCS501-MA_N319"},{"-"},{"-"},{"RUSCS504-PR_N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS304-PR_N421"},{"RUSCS102-RM_N117"},{"-"},{"RUSCS304-PR_N421"},{"RUSCS102-RM_N117"},{"-"},{"RUSCS302-PR_N421"},{"RUSCS102-RM_N117"},{"-"},{"-"},{"-"},{"-"},{" "},{"          P R"},{" "},{"KP & PV"},{"RUSCSP305"},{" "},{" "},{" "},{" "},{" "},{" "},{" "} },
        { {" Wednesday  (3)"},{"RUSCS501-MA_N319"},{"-"},{"-"},{"RUSCS501-MA_N319"},{"-"},{"-"},{"RUSCS501-MA_N319"},{"-"},{"-"},{" "},{" R E C E S S "},{" "},{"RUSCS306-MA_N421"},{"RUSCS101-PV_N117"},{"-"},{"RUSCS306-MA_N319"},{"RUSCS105-KP_N117"},{"-"},{"RUSCS301-KP_N421"},{"RUSCS103-PV_N117"},{"-"},{"RUSCS301-KP_N117"},{"-"},{"-"},{" "},{"A C T I C A L S"},{" "},{"MA & PV"},{"RUSCSP303"},{" "},{" "},{" "},{" "},{" "},{" "},{" "} },
        { {" Thursday  (4)"},{"RUSCS501-MA_N319"},{"-"},{"-"},{"RUSCS501-MA_N319"},{"-"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS303-PV_N421"},{"RUSCS105-KP_N117"},{"-"},{"RUSCS303-PV_N421"},{"RUSCS105-KP_N117"},{"-"},{"RUSCS302-PR_N421"},{"RUSCS102-RM_N117"},{"-"},{"-"},{"-"},{"-"},{" "},{" "},{" "},{"EJ & KP"},{"RUSCSP307"},{" "},{" "},{" "},{" "},{" "},{" "},{" "} },
        { {" Friday  (5)"},{"-"},{"-"},{"-"},{"RUSCS501-MA_N319"},{"-"},{"-"},{"RUSCS501-MA_N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS305-KP_N421"},{"RUSCS107-PR_N117"},{"-"},{"RUSCS305-KP_N421"},{"RUSCS106-EJ_N117"},{"-"},{"RUSCS302-PR_N421"},{"RUSCS107-EJ_N117"},{"-"},{"RUSCS105-KP_LAB"},{"-"},{"-"},{" "},{" "},{" "},{"PR & RM"},{"RUSCSP302"},{" "},{" "},{" "},{" "},{" "},{" "},{" "} },
        { {" Saturday  (6)"},{"-"},{"-"},{"-"},{"RUSCS503-MS_N319"},{"-"},{"-"},{"RUSCS503-MS_N319"},{"-"},{"-"},{" "},{" "},{" "},{"RUSCS301-KP_N421"},{"RUSCS104-MS_N117"},{"-"},{"RUSCS305-KP_N421"},{"RUSCS104-MS_N117"},{"-"},{"RUSCS306-MA_N421"},{"RUSCS103-PV_N117"},{"-"},{"RUSCS103-PV_N117"},{"-"},{"-"},{" "},{" "},{" "},{"MA & MS"},{"RUSCSP306"},{"1:25PM-3:55"},{"EJ"},{"RUSCSP506"},{" "},{" "},{" "},{" "} },
    };

    // draw table
    int i, j,k;
    for(j=0;j<37;j++)
    {
        for(i=0;i<7;i++)
        {
            printf("%-17s",table[i][j]);
            if(j==10 || j==11 || j==12 || j==25 || j==26 || j==27)
            {
                continue;
            }
            printf("|");
        }
        printf("\n");
        if(j%3==0)
        {
            for ( i = 0; i <7; i++)
            {
                printf("==================");
            }
            printf("\n");
        }
    }

    // ask user to edit
    int day_no,time_no;
    printf("\nEnter day and time_no. to add eg(1  3): ");
    scanf("%d%d",&day_no,&time_no);
    for(i=(time_no*3)-2;  i<((time_no*3)-2)+3  ;i++)
    {
        printf("%s \n",table[day_no][i]);
    }

    char input[17];
    printf("Enter data\n eg.(RUSCS104-MS_N411): ");
    scanf("%s",&input);
    printf("\n%s",input);
    
}

