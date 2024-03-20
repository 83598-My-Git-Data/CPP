#include <iostream>
using namespace std;

class Student
{
private:
    int Rollno;
    string Name;
    int marks;
public:
void initStudent()
{
    Rollno=1001;
    Name="om";
    marks=86;
}
void acceptStudentFromConsole()
{
    cout<<"Enter RollNo -";
    cin>>Rollno;
    cout<<"Enter Name -";
    cin>>Name;
    cout<<"Enter Marks -";
    cin>>marks;
}
void printStudentOnConsole()
{
    cout<<"Roll No -"<<Rollno<<endl;
    cout<<"Name -"<<Name<<endl;
    cout<<"Marks -"<<marks<<endl;
}
};
int main()
{
    Student t1;
    int choice;
    t1.initStudent();
    
    do
    {
        cout<<"Menu"<<endl;
        cout<<"0.exit"<<endl;
        cout<<"1.initStudent"<<endl;
        cout<<"2.printStudentOnConsole"<<endl;
        cout<<"3.acceptStudentFromConsol"<<endl;
        cout<<"Enter Your Choice:";
        cin>>choice;

        switch(choice)
        {
            case 0:
                cout<<"Thanks For Visting us"<<endl;
            break;
            case 1:
                t1.initStudent();
                cout<<"init Completed"<<endl;
                break;
            case 2:
                t1.printStudentOnConsole();
                break;
            case 3:
                t1.acceptStudentFromConsole();
                break;
            default:
                cout<<"Wrong choice"<<endl;
                break;
        }
    } while (choice!=0);
    return 0;
}