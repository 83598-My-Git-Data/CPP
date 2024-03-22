#include<iostream>
using namespace std;

class Time
{
private:
    int h,m,s;
    
    

public:

    Time()
    {
        h=2;
        m=40;
        s=38;
    }
    Time(int h1,int m1,int s1)
    {
        h=h1;
        m=m1;
        s=s1;
    }

    int getHOur()
    {
        return h;
    }
    int getMinute()
    {
        return m;
    }
    int getSeconds()
    {
        return s;
    }

    void displayTime()
    {
        cout<<"Time is - "<<h<<"hrs"<<" "<<m<<"min"<<" "<<s<<"seconds"<<endl;
    }

    void setters(int h2,int m2,int s2)
    {
        h=h2;
        m=m2;
        s=s2;
    }
};

int main()
{
    Time *ptr1 = new Time();
    Time *ptr2 = new Time(12,12,12);

    ptr1->displayTime();
    ptr2->displayTime();

    ptr1->setters(10,23,49);
    ptr2->getMinute();
    ptr1->getMinute();
    ptr2->setters(7,10,15);
    ptr1->getSeconds();

    ptr1->displayTime();
    ptr2->displayTime();

    return 0;

}