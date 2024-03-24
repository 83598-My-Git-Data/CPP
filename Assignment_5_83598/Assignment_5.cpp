#include<iostream>
using namespace std;

class Date
{
private:
        int day,month,year;

public:
    Date()
    {
        day=26;
        month=11;
        year=2008;
    }
    void acceptDate()
    {
        cout<<"Enter Day -";
        cin>>day;
        cout<<"Enter Month -";
        cin>>month;
        cout<<"Enter Year -";
        cin>>year;
    }
    void displayDate()
    {
        cout<<"Date -"<<day<<"-"<<month<<"-"<<year<<endl;
    }
};
class employee
{
private:
        int id,sal;
        string dept;
        Date j_date; // Association - Composition
public:
        employee()
        {
            id=1001;
            sal=5000;
            dept="Manager";

        }
        void acceptEmployee()
        {
            cout<<"Employee id -";
            cin>>id;
            cout<<"Employee salary -";
            cin>>sal;
            cout<<"Employee dept -";
            cin>>dept;
            cout<<"Employee joining Date -";
            j_date.acceptDate();
        }
        void displayEmployee()
        {
            cout<<"id -"<<id<<endl;
            cout<<"salary-"<<sal<<endl;
            cout<<"dept -"<<dept<<endl;
            cout<<"Joining Date -";
            j_date.displayDate();
            
        }

};
class person
{
private:
    string name;
    string address;
    Date Dob; // Association - composition
    employee *eptr; //Association - Aggregation

public:
        person()
        {
            name="Rohit";
            address="Krishnanagar";
            eptr=NULL;
        }
        void acceptPerson()
        {
            cout<<"Enter Name -";
            cin>>name;
            cout<<"Enter Address -";
            cin>>address;
            cout<<"Enter Date of Birth -";
            Dob.acceptDate();
        }
        void addEmployee()
        {
            eptr=new employee;
            eptr->acceptEmployee(); 
            
        }
        void displayPerson()
        {
            cout<<"Person Name -"<<name<<endl;
            cout<<"Person address -"<<address<<endl;
            cout<<"Person DOB -";
            Dob.displayDate();

            if(eptr!=NULL)
            {
                cout<<"Employee Details -";
                eptr->displayEmployee();
            }
        }
        ~person()
        {
            delete eptr;
            eptr=NULL;
        }
};

int main()
{
    // Date d1;
    // d1.displayDate();
    person p1;
    p1.acceptPerson();
    p1.displayPerson();

    person p2;
    p2.acceptPerson();
    // employee *e=new employee; // pointer is created
    p2.addEmployee();
    p2.displayPerson();

}