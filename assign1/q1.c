#include<stdio.h>
#include<stdlib.h>
struct Date{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day=29;
    ptrDate->month=2;
    ptrDate->year=2000;
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter Day=");
    scanf("%d",&ptrDate->day);
    if( ptrDate->day<1 || ptrDate->day>31){
        printf("Invalid month!!!\n");
        exit(1);
    }
    printf("\nEnter Month=");
    scanf("%d",&ptrDate->month);
    if( ptrDate->month<1 || ptrDate->month>12){
        printf("Invalid month!!!\n");
        exit(1);
    }
    printf("\nEnter the Year=");
    scanf("%d",&ptrDate->year);

}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("The Entered date is %d-%d-%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}

int main()
{
    int choice;
    struct Date d1;
    while(choice!=0){
    printf("Enter choice 0.Exit 1.init date 2.Accepted date = ");
    scanf("%d",&choice);
    
    switch(choice){
    case 0: printf("Exit...\n");
            break;
    case 1: initDate(&d1);
            printDateOnConsole(&d1);  
            break;
    case 2: acceptDateFromConsole(&d1);
            printDateOnConsole(&d1);
            break;
    default:printf("Invalid choice!!!\n");
    }
    }
    return 0;
}