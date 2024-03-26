#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int choice;
    int ch;
    int index=0;
    int count =0;
    Employee *arr[5];
    int countManager=0;
    int countSalesman=0;
    int countSalesmanager=0;

    do
    {
        cout<<"Menu"<<endl;
        cout<<"1.Accept Employee -"<<endl;
        cout<<"2.display the count of all employees with respect to designation-"<<endl;
        cout<<"3.display all managers-"<<endl;
        cout<<"4.display all salesman -"<<endl;
        cout<<"5.display all salesmanagers -"<<endl;
        cout<<"6.enter The choice -";
        cin>>choice;

        switch(choice)
        {
            case 1:

                    cout<<"1.Manager -"<<endl;
                    cout<<"2.salesman -"<<endl;
                    cout<<"3.salesmanagers -"<<endl;
                    cout<<"Enter the employee - ";
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            if (index < 10)
                            {
                                arr[index] = new Manager();
                                arr[index]->accept();
                                arr[index]->display();
                                index++;
                                countManager++;
                            }
                            else{
                                cout << "Array is Full..." << endl;
                            }
                            break;
                        case 2:
                             if (index < 10)
                            {
                                arr[index] = new Salesman();
                                arr[index]->accept();
                                arr[index]->display();
                                index++;
                                countSalesman++;
                            }
                            else{
                                cout << "Array is Full..." << endl;
                            }
                            break;
                            
                        case 3:
                             if (index < 10)
                            {
                                arr[index] = new SalesManager();
                                arr[index]->accept();
                                arr[index]->display();
                                index++;
                                countSalesmanager++;
                            }
                            else{
                                cout << "Array is Full..." << endl;
                            }
                            break;
                    }
            case 2:
                    cout<<"The Count of Managers -"<<countManager<<endl;
                    cout<<"The Count of Salesman -"<<countSalesman<<endl;
                    cout<<"The Count of salesmanger -"<<countSalesmanager<<endl;
                    break;

            case 3:
            for (int i = 0; i < index; i++)
                if (typeid(*arr[i]) == typeid(Manager))
                    arr[i]->display();
                    break;
            case 4:
                for (int i = 0; i < index; i++)
                if (typeid(*arr[i]) == typeid(Salesman))
                    arr[i]->display();
                    break;
            case 5:
            for (int i = 0; i < index; i++)
                if (typeid(*arr[i]) == typeid(SalesManager))
                    arr[i]->display();
                    break;
            default:
                cout<<"Wrong Choice..."<<endl;
                break;
        }
    } while (choice!=0);

    return 0;
}
