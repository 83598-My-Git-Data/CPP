#include<iostream>
using namespace std;
class date
{
private:
   int day;
   int month;
   int year;

public:

    void initDate()
    {
        day=10;
        month=4;
        year=2018;


    }
    void printDateOnConsole()
    {
       cout<<day<<" - "<<month<<" - "<<year<<endl;
    }
    void acceptDateFromConsole()
    {
        cout<<"Enter Day -";
        cin>>day;
        cout<<"Enter Month -";
        cin>>month;
        cout<<"Enter Year -";
        cin>>year;   
    }
   
    bool isLeapYear()
    {    
        if(year%4==0||year%400==0)
        {
            cout<<"leap year"<<endl;
        }
        else
        {
            cout<<"not leap year"<<endl;
        }
        return false;
    }
};
int main()
{
    date t;
    int ch;
    t.initDate();
    
    do{
        cout<<"Menu"<<endl;
        cout<<"1 init Date"<<endl;
        cout<<"2 print Date"<<endl;
        cout<<"3 accept Date"<<endl;
        cout<<"4 Leap Year check"<<endl;
        cout<<"enter choice -";
        cin>>ch;
        switch(ch){
            case 0:
                cout<<"exit"<<endl;
            break;
            case 1:
                t.initDate();
                cout<<"init completed"<<endl;
            break;
            case 2:
                t.printDateOnConsole();
            break;
            case 3:
                t.acceptDateFromConsole();
            case 4:
                t.isLeapYear();
            break;
            default:
                cout<<"Wrong Choice"<<endl;
            break;
        }
    }
    while(ch !=0);
    return 0;
}