#include <iostream>

struct Date 
{
    int day;
    int month;
    int year;
    
};
void initDate(struct Date *ptrDate)
{
        ptrDate->day=12;
        ptrDate->month=4;
        ptrDate->year=2008;

}
void acceptDate(struct Date *ptrDate)
{
    printf("Enter Day month & year:");
    scanf("%d%d%d",&ptrDate->day ,&ptrDate->month, &ptrDate->year);
}
void DisplayDate(struct Date *ptrDate)
{
    printf("Date-:%d-%d-%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}


int main()
{
    int choice;
    struct Date d1;
    initDate(&d1);
    
    do 
    {
        printf("1.accept Date:");
        printf("2.Display Date:");
        printf("Enter Your Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                acceptDate(&d1);
                break;
            case 2:
                DisplayDate(&d1);
                break;
            default:
                printf("wrong choice:");
                break;
        }
    }while(choice!=0);
        return 0;

}
1