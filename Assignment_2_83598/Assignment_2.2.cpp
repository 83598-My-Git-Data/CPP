#include<iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int tcars;
    double tmoney;

public:
    tollbooth()
    {
        tcars=0;
        tmoney=0;
    }
    void payingCar()
    {
        tcars++;
        tmoney=tmoney+0.50;

    }
    void noPayCar()
    {
        tcars++;
    }
    void printOnConsole()
    {
        int payCars=tcars+(tmoney/0.5);
        int noPayCars=tcars-payCars;
        cout<<"The car total -"<<tcars<<endl;
        cout<<"The Cash total -"<<tmoney<<endl;
        cout<<"The total Paying cars -"<<payCars<<endl;
        cout<<"The total non Paying cars -"<<noPayCars<<endl;
        //cin>>cartotal;
    }
};

int main()
{
    tollbooth t;
    int choice;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1.The Total paying cars-"<<endl;
        cout<<"2.The non paying cars-"<<endl;
        cout<<"3.summary of the total -"<<endl;
        cout<<"Enter The choice -";
        cin>>choice;

        switch(choice)
        {
            case 0:
                cout<<"Thanks for visting us ..."<<endl;
                break;
            case 1:
                t.payingCar();
                break;
            case 2:
                t.noPayCar();
                break;
            case 3:
                t.printOnConsole();
                break;
            default:
                cout<<"Wrong choice"<<endl;
        }

    } while (choice!=0);
    
    return 0;
}