#include<iostream>
struct Date{
    int day;
    int month;
    int year;

void initDate()
{
    day=29;
    month=2;
    year=2000;
}
void acceptDateFromConsole()
{
    printf("Enter Day=");
    scanf("%d",&day);
    if(day<1 ||day>31){
        printf("Invalid month!!!\n");
        exit(1);
    }
    printf("\nEnter Month=");
    scanf("%d",&month);
    if(month<1 || month>12){
        printf("Invalid month!!!\n");
        exit(1);
    }
    printf("\nEnter the Year=");
    scanf("%d",&year);

}
void printDateOnConsole()
{
    printf("The Entered date is %d-%d-%d\n",day,month,year);
    //     if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    // {
    // printf("This is a Leap year!!!\n");
    // }
    //     else{
    // printf("This is not a Leap year!!!\n");
    // }
}
bool isLeapYear()
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    return true;
    else
    return false;
}

};

int main()
{
    int choice;
    struct Date d1;
    bool check;
    while(choice!=0){
    printf("Enter choice 0.Exit 1.init date 2.Accepted date 3. Leap year= ");
    scanf("%d",&choice);
    
    switch(choice){
    case 0: printf("Exit...\n");
            break;
    case 1: d1.initDate();
            d1.printDateOnConsole();  
            break;
    case 2: d1.acceptDateFromConsole();
            d1.printDateOnConsole();
            break;
    case 3: check=d1.isLeapYear();
            if(check)
            printf("This is a Leap year!!!\n");
            else
            printf("This is not a Leap year!!!\n");
            break;
    default:printf("Invalid choice!!!\n");
    }
    }
    return 0;
}