/*
    County Library System,
    by, Kevin Muriuki,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/

#include <stdio.h>
#include <stdlib.h>

    struct Patron {
        int ID;
        char name[50];
        char email[50];
        char password[24];
        int is_staff;
    };


    void printNavigationMessage(char message[100]);
    void headMessage(char message[100]);
    void welcomeMessage();
    int menu();
    void newPatron();
    void allPatrons();
    void viewRecourses();
    void viewRecourses();

int main() {
    char title[100] = "County Library Management";
    char status[100] = "Welcome Kevin";

    welcomeMessage();
    menu();



    return 0;
}

void printNavigationMessage(char message[100]) {
    int len =0; //length
    int pos = 0;    //position of the message

    //calculate how many space need to print
    len = (78 - strlen(message))/2;

    // Sets the margin of the navigation message
    printf("\t\t\t");

    // Centers the navigation message
    for(pos =0 ; pos < len ; pos++)
    {
        //print space
        printf(" ");
    }
    //print message
    printf("%s",message);
}

void headMessage(char message[100])
{
    system("cls");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############         County Library management System          ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printNavigationMessage(message);
    printf("\n\t\t\t----------------------------------------------------------------------------");
}

void welcomeMessage() {
    headMessage("This program is for practice in the Structured programming language");
    printf("\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =              WELCOME Kevin                =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}

int menu () {
    int v = 0;

    do {
        headMessage("Menu");
        printf("\n\n\t\t\tSelect an action below\n");
        printf("\t\t\t1. Add new Patron\n");
        printf("\t\t\t2. view all patrons\n");
        printf("\t\t\t3. Add new resources\n");
        printf("\t\t\t4. View all resources\n");
        printf("\t\t\t0. Exit\n");
        printf("\n\n\n\t\t\tEnter Choice: ");

        scanf("\t\t\t%d", &v);
        switch(v) {
        case 1:
            newPatron();
            break;
        case 2:
            allPatrons();
            break;
        case 3:
            newResources();
            break;
        case 4:
            viewRecourses();
            break;
        case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
             printf("\n\n\n\t\t\tINVALID CHOICE!!! Try again...");
        }
    } while(v != 0);

    return 0;


}

void newPatron() {
    printf("\n\t\t\t\t\n");
    headMessage("ADD NEW PATRON");
    printf("\n\n\t\t\tENTER PATRONS DETAILS BELOW:");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    struct Patron patron;

    printf("\n\t\t\tEnter name: ");
    getchar();
    gets(patron.name);
    printf("\n\t\t\tEnter email: ");
    gets(patron.email);
    printf("\n\t\t\tEnter password: ");
    gets(patron.password);
    printf("\n\t\t\tEnter 1 if staff 0 otherwise: ");
    scanf("%d", &patron.is_staff);

    system("cls");
    getchar();
    printf("\t\t\tPatron %s is successfully added\n", patron.name);
    printf("\t\t\tEmail %s is successfully added\n", patron.email);
    printf("\t\t\tPassword %s is successfully added\n", patron.password);
    if (patron.is_staff == 1) {
        printf("\t\t\tPatron is successfully added as a Staff\n");
    } else {
        printf("\t\t\tPatron is is not a Staff\n");
    }
    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();;
}

void allPatrons(struct Patron patron) {
    printf("\n\t\t\t\tView All Patrons\n");
    printf("\n\t\t\t\t\n");
    headMessage("VIEW PATRONS");
    printf("\n\n\t\t\tENTER PATRONS DETAILS BELOW:");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    getchar();
    printf("\t\t\tPatron %s is successfully added\n", patron.name);
    printf("\t\t\tPatron %s is successfully added\n", patron.email);
    printf("\t\t\tPatron %s is successfully added\n", patron.password);
    printf("\t\t\tPatron %s is successfully added\n", patron.is_staff);
    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();;
}

void newResources() {
    printf("\n\t\t\t\tAdd New Resources\n");
    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
}

void viewRecourses() {
    printf("\n\t\t\t\tView All Resources\n");
    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
}
