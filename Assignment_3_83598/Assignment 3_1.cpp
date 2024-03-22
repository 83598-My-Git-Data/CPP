#include<iostream>
using namespace std;

class volume
{
private:  
    double vol;
    double radius;
    const double height;
    static const double PI;   // 

public:
    volume():height(20)
    {
        radius=8;
    }
    volume(double r,double h):height(h) 
    {
        radius=r;
    }
    double getRadius()
    {
        return radius;
    }
    double getHeight() const
    {
        return height;
    }
    void setRadius(double r1)
    {
        radius=r1;
    }
    // void setHeight(int h1)
    // {
    //     height=h1;
    // }
    double getVolume()
    {
        return vol;
    }
    void displayVolume()
    {
        vol= PI*radius*radius*height;
        cout<<"Volume of Cylinder -"<<vol<<endl;
    }
};

//int volume::height=15;
const double volume::PI=3.14;

int main()
{
    volume v1;
    volume v2(10,12);

    v1.displayVolume();
    v2.displayVolume();

    cout<<"Radius -"<<v1.getRadius()<<endl;
    cout<<"height -"<<v1.getHeight()<<endl;
    v1.setRadius(15);
    v2.setRadius(6);
    
    v1.displayVolume();
    v2.displayVolume();
    cout<<"Volume of Updated values  with cylinder - "<<v1.getVolume()<<endl;
    cout<<"Volume of updated values with cylinder - "<<v2.getVolume()<<endl;
    

    return 0;

}
