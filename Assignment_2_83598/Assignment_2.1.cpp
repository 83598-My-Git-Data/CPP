#include<iostream>
using namespace std;
class volume
{
private:
    int length,width,height;
    

public:

    volume()
    {
        length=10;
        width=8;
        height=20;
    }
    volume(int value)
    {
        this->length=value;
        this->width=value;
        this->height=value;
    }
    volume(int x,int y,int z)
    {
        this->length=x;
        this->width=y;
        this->height=z;

    }
    void displayVolume()
    {
        int area=this->length*this->width*this->height;
        cout<<"Volume of the box -"<<area<<endl;
        
    }
};
int main()
{
   //volume v1;
   int choice;
   volume v1;
   volume v2(25);
   volume v3(12,20,30);

do
{
    cout<<"Menu"<<endl;
    cout<<"1.Volume with default values -"<<endl;
    cout<<"2.Volume with same values -"<<endl;
    cout<<"3.Volume with different values -"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter Choice -";
    cin>>choice;

    switch(choice)
    {
        case 0:
            cout<<"Thanks for visiting us ..."<<endl;
        case 1:
            v1.displayVolume();
        break;
        case 2:
            v2.displayVolume();
        break;
        case 3:
            v3.displayVolume();
        break;
        case 4:
            cout<<"Wrong Choice..."<<endl;
        break;
    }
} while(choice!=0);
    
//    v1.displayVolume();
//    v2.displayVolume();
//    v3.displayVolume();
   
   return 0;
   
}
