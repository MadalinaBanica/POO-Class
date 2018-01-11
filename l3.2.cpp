#include <iostream>
using namespace std;
class Car
{
string color;
int capacity;
public:
void SetColor(string c);
void SetCapacity(int r);
string GetColor();
int GetCapacity();
Car();
Car(string col, int cap);
};
void Car::SetColor(string c)
{
color=c;
}
void Car::SetCapacity(int r)
{
capacity=r;
}
string Car::GetColor()
{
return color;
}
int Car::GetCapacity ()
{
return capacity;
}
Car::Car()//initialization using the implicit constructor (with no arguments)
{//using the scope resolution (::) operator to show belonging to class Car
color="white";
capacity=20;
cout<<"Called the implicit constructor "<<endl;
}
Car::Car(string col, int cap)//initialization using constructor with 2 arguments(string,int)
{//constructors have no return type
color=col;
capacity=cap;
cout<<"Called the constructor with 2 arguments "<<endl;
}
int main()
{
Car c0;//create a Car type object using the implicit constructor
//printing it’s attribute values
cout<<"Car c0 has (implicit) color "<<c0.GetColor()<<" and (implicit) tank capacity of"<<c0.GetCapacity()<<" liters "<<endl;
Car c1;//create another Car type object using setters
c1.SetColor("yellow");
c1.SetCapacity(40);
cout<<"Car m1 has the color "<<c1.GetColor()<<" and the tank capacity of"<<c1.GetCapacity()<<" liters "<<endl;
Car c2("red",35);//using the 2 argument constructor
cout<<"Car c2 has the color "<<c2.GetColor()<<" and the tank capacity of"<<c2.GetCapacity()<<" liters "<<endl;
//no matter how I set the attributes, I use getters to read them for printing
return 0;
}
