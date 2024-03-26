#include<iostream>
using namespace std;

class product
{
private:
        int id;
        string title;
        double price;

public:
    void setPrice(double x)
        {
            this->price=x;
        }
    double getPrice()
        {
            return price;
        }
    virtual void accept()
    {
        cout<<"Enter id -";
        cin>>id;
        cout<<"Enter the Title -";
        cin>>title;
        cout<<"Enter the price -";
        cin>>price;
    }
    virtual void display()
    {
        cout<<"id -"<<id<<endl;
        cout<<"Title -"<<title<<endl;
        cout<<"Price -"<<price<<endl;
    }
};

class book:public product
{
private:
    string author;

public:
    void accept()
    {
        cout<<"Enter the Author - ";
        cin>>author;

        product::accept();

        setPrice(getPrice() - getPrice() * 0.10);

    }
    virtual void display()
    {
        cout<<"Author -"<<author<<endl;
        product::display();
    }
};

class Tape:public product
{
private:
    string artist;

public:
    void accept()
    {
        cout<<"Enter Artist name -";
        cin>>artist;

        product::accept();

        setPrice(getPrice() - getPrice() * 0.5);


    }
    virtual void display()
    {
        cout<<"Artist -"<<artist<<endl;
        product::display();
    }
};

int main()
{
    product *arr[3];
    product *s=NULL;
    int index=0;
    int total=0;
    // arr[0]=new book;
    // arr[1]=new Tape;
    // arr[2]=new book;


    int choice;

    do
    {
        cout<<"Menu"<<endl;
        // cout<<"1.Display Products -"<<endl;
        cout<<"1.Display The Book details -"<<endl;
        cout<<"2.Display The tape Details -"<<endl;
        cout<<"3.Calculate the bill -"<<endl;
        cout<<"Enter The choice -";
        cin>>choice;

        switch(choice)
        {
            case 0:
                cout<<"Thanks for visting the app"<<endl;
                break;
            case 1:
                    s=new book();
                    total=getPrice();
                    break;
            case 2:
                    s=new Tape();
                    break;
            case 3:
                    for(int i=0;i<index;i++)
                    {
                        // arr[i]->display();
                        i=i+arr[i]->getPrice();
                    }
                    break;
            default:
                    cout<<"Wrong choice ...."<<endl;
                    break;
        }
        if(s!=NULL)
        {
            if(index<3)
            {
                s->accept();
                arr[index]=s;
                index++;
                s=NULL;
            }
            else
            {
                cout<<"Array is Full ..."<<endl;
                delete s;
                s=NULL;
            }
        }
    } while (choice!=0);
    for(int i=0;i<index;i++)
    {
        delete arr[i];
    }

   return 0; 
}
