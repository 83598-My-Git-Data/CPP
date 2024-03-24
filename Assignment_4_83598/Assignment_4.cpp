#include <iostream>
using namespace std;
/*
Behaviour -> First In Last Out
push(), pop(),peek(), isEmpty(), isFull(), print()
*/

class Stack
{
private:
    int size;
    int top;
    int *ptr;

public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        ptr = new int[size];
    }

    void push(int element)
    {
        if (!isFull())
        {
            top++;
            ptr[top]=element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (!isEmpty())
        {
           top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    void peek()
    {   
        int d = ptr[top];
        cout<<d<<endl;
    }
    void display()
    {
       for(int i=top;i>-1;i--)
       {
        cout<<"The stack is -"<<ptr[i]<<endl;
       }
    }
    bool isFull()
    {
        return top == (size - 1);
    }
    bool isEmpty()
    {
        return top == -1;
    }
    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }
};

int main()
{
    // Stack d;
    int n;
    cout<<"Enter Stack Size";
    cin>>n;
    Stack s(n);
    int choice;

    do
    {
        cout<<"Menu"<<endl;
        cout<<"1.Pushing Element in stack -"<<endl;
        cout<<"2.Poping Element in stack -"<<endl;
        cout<<"3.peek Element in stack -"<<endl;
        cout<<"4.print the Element in stack -"<<endl;
        cout<<"5.Free the memory leakages -"<<endl;
        cout<<"Enter A Choice -";
        cin>>choice;

        switch(choice)
        {
            case 0:
                cout<<"Thank you for visiting"<<endl;
                break;
            case 1:
                 cout<<"enter stack value";
                int k;
                cin>>k;
                s.push(k);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.display();
                break;
            case 5:
                s.~Stack();
                break;
            default:
                cout<<"Exit"<<endl;
                break;
        }
    
    } while (choice!=0);
    
    return 0;
}