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
friend bool CompareCars(const void*, const void *); 
Car(const Car&);
};
void DecisionMessage (unsigned int*, Car*, Car*, bool (*pFctCompare)(const void *a, const void *b)); 
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
int Car::GetCapacity()
{
return capacity;
}
bool CompareCars(const void *pM1, const void *pM2)
{
return ((*(Car*)pM1).GetColor() == (*(Car*)pM2).GetColor()) ? true : false;
}
Car::Car()
{
color="white";
capacity=20;
cout<<"Called the constructor with 2 arguments "<<endl;
}
Car::Car(string col, int cap)
{
color=col;
capacity=cap;
cout<<"Called the constructor with 2 arguments "<<endl;
}
Car::Car(const Car& c1)
{
cout<<"copy constructor called" << endl;
color = c1.color;
capacity = c1.capacity;
}
int main()
{
Car c0;
cout<<"Car c0 has (implicit) color "<<c0.GetColor()<<" and tank capacity of"<<c0.GetCapacity()<<" liters "<<endl;
Car c1;
c1.SetColor("yellow");
c1.SetCapacity(40);
cout<<"Car c1 has color "<<c1.GetColor()<<" and tank capacity of "<<c1.GetCapacity()<<"liters "<<endl;
Car c2("red",35);
cout<<"Car c2 has color "<<c2.GetColor()<<" and tank capacity of "<<c2.GetCapacity()<<"liters "<<endl;
Car c3 = c2;
cout<<"Car c3 has color "<<c3.GetColor()<<" and tank capacity of "<<c3.GetCapacity()<<"liters "<<endl;

unsigned int decision = 2; 
cout << endl;
cout << "Decision before comparing objects: " << decision << endl;
Car *pCar0 = &c0, *pCar2 = &c2;
DecisionMessage(&decision, pCar0, pCar2, CompareCars);
cout << "Decision after comparison is " << decision << ", meaning: " << ((decision) ?"Same color " : "Different colors") << endl;
return 0;
}
void DecisionMessage(unsigned int *pDecision,Car *pM1,Car *pM2,bool (*pFctCompare)(const void *a, const void *b))
{
if( 1 == pFctCompare((Car*)pM1, (Car*)pM2) )
*pDecision = true;
else
*pDecision = false;
}
