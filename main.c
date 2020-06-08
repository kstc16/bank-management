#include<stdio.h>
#include<conio.h>

int main()
{
    char str[500];
    int  i  ;
    printf("\t\t\tcustomer account banking management system\n");
    printf("\t\t\t\twelcome to the main menu\n");
    printf("1.create new account\n");
    printf("2.update information of existing account\n");
    printf("3.for transactions\n");
    printf("4.check the details of existing account\n");
    printf("5.removeing existing account\n");
    printf("6.view custome's list\n");
    printf("7.exit\n");
    printf("enter your choice:");
    scanf("%d",&i);
    switch (i)
    {
    case  1:
    if(i=1)
    {
    printf("\nname:");
    scanf("%s",&str);
    printf("\ndate of birth:1");
    scanf("%s",&str);
     printf("\nadress:");
     scanf("%s",&str);
    printf("\nphone number:");
    scanf("%s",&str);
    printf("\nemail id:");
    scanf("%s",&str);
    }
    break;
    case 2:
    if(i=2)
    {
        printf("update phone number:");
        scanf("%s",&str);
        printf("update email id:");
        scanf("%s",&str);
    }
    break;
    case 3:
    {
        if(i=3)
        printf("account number:");
        scanf("%s",&str);
        printf("amount:");
        scanf("%s",&str);


    }
    break;
    case 4:
    {
        if(i=4)
        printf("account balance");
    }
    break;
    case 5:
    {
        if(i=5)
        printf("account number:");
        scanf("%s",&str);

    }
    break;
    case 6:
    {
        if (i=6)
        printf("");
        
    }
    break;
    case 7:
    {
        if(i=7)
        printf("thank you");
        return 0;
    }
    default :
    {
        printf("error");
    }


    }

    return 0;
}