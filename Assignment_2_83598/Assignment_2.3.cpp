#include<iostream>
using namespace std;
class Address{
  private:
    string building;
    string street;
    string city;
    int pin;
   
   public:
    Address(){
        building =" ";
        street = " ";
        city = " ";
        pin = 0;
    }
    Address(string b, string s, string c, int p){
     building = b;
     street = s;
     city = c;
     pin = p;
   }
  
   string getNmae(){ return building;}
   string getStreet(){return street;}
   string getcity(){return city;}
   int getpin(){return pin;}

   void setters(string build, string streetno, string city, int pin){
     building = build;
     street = streetno;
     city = city;
     pin = pin;
   }
   void accept(){
    cout<<"enter building name"<<endl;
    cin>>building;
    cout<<"enter street no"<<endl;
    cin>>street;
    cout<<"enter city name"<<endl;
    cin>>city;
    cout<<"enter pin code"<<endl;
    cin>>pin;
   
   }
   void display(){
     cout<<"building-Name "<<building<<endl<<" street-no "<< street<<endl<<" city name "<<city<<endl<<" pin code "<<pin<<endl;
   };
   

 
};
int main()
{
    Address b;
    b.accept();
    b.display();

    Address c("KrishnaComplex","KrishnaLane-6","Pune",412207);
    c.display();   
    
   return 0; 
}