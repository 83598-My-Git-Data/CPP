#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()//parameterless constructor
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()// virtual function for late binding
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
    virtual ~Employee()//virtual destructor called to avoid core dumped error and also to call first the derived class destructor
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee// the base class make virtual to avoid overridden of function in salesmanager class
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
        Employee::accept(); // using scope resolution operator and class name we can access base class function
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
    Employee e;
    e.accept();
    e.display();

    Manager m;
    m.accept();
    m.display();

    Salesman s;
    s.accept();
    s.display();

    SalesManager s1;
    s1.accept();
    s1.display();

    Employee *eptr=new Employee();
    eptr->accept();
    eptr->display();
    delete eptr;
    eptr=NULL;

    Employee *eptr=new Manager();
    eptr->accept();
    eptr->display();
    delete eptr;
    eptr=NULL;

    Employee *eptr=new Salesman();
    eptr->accept();
    eptr->display();
    delete eptr;
    eptr=NULL;

    // Employee *eptr = new Employee();
    // Employee *eptr = new Manager();
    // Employee *eptr = new Salesman();
    Employee *eptr = new SalesManager();
    eptr->accept(); // Late Binding
    eptr->display();

    delete eptr;
    eptr = NULL;
    return 0;
}
