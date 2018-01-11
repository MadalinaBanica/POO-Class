#include <iostream>
using namespace std; 
class Car
{
public:
string _brandname, _model; 
int _year, _liters;

void SetBrand(string b); 
void SetModel(string m); 
void SetYear(int y); 
string GetModel(); 
string GetBrand(); 
int GetYear(); 
int TestYear(); 
int Full();
int Empty();
int Profile();
int CompareYear(int p, int q);
Car();
};
void Car::SetBrand(string b) 
{
_brandname=b;
}
void Car::SetModel(string m) 
{
_model=m;
}
string Car::GetBrand() 
{
return _brandname;
}
string Car::GetModel() 
{
return _model;
}
void Car::SetYear(int y)
{
_year=y;
}
int Car::GetYear() 
{
return _year;
}
int Car::TestYear()
{
int y;
do
{
cout<<"Insert new car's year : ";
cin>>y;
}
while(y<1900 || y>2018); 
_year=y;
return _year;
}
int Car::Full()
{
if(_liters<50)
{
_liters=_liters+10;
}
else{
cout<<("The gas tank is full, no need to refill.\n\n");
}
return _liters;
}
int Car::Empty()
{
if(_liters<=10)
{
cout<<"The gas tank is empty, refill needed!!!.\n\n";
}
else{
_liters=_liters-10;
}
return _liters;
}
int Car::Profile()
{
switch(_liters)
{

case 10:
cout<<"You have max 100km to go. REFILL!!!\n\n";
break;
case 20:
cout<<"You have max 200km to go. Please REFILL!.\n\n";
break;
case 30:
cout<<"You have max 300km to go. Take care. \n\n";
break;
case 40:
cout<<"Have a nice day.\n\n";
break;
case 50:
cout<<"Your tank is full. Have a nice day!\n\n";
break;
default:
cout<<"Error establishing profile.\n\n";
break;
}
}
int CompareYear(int p, int q)
{
	if(p==q)
	cout<<"The cars have the same year \n";
	else if(p<q)
	cout<<" The first car is younger than the second \n";
	else
	cout<<" The first car is older than the second \n";
}
Car::Car() 
{
_brandname="MiniCooper";
_model="Countryman";
_year=2015;
_liters=30;
}
int main()
{
Car auto1;
cout <<"First car's brand is : "<<auto1.GetBrand()<<" "<<auto1.GetModel()<<" is from "<<auto1.GetYear()<<"\n";
Car auto2;
auto2.SetBrand("Audi");
auto2.SetModel("A3");
cout <<"Automobil 2 is "<<auto2.GetBrand()<<" "<<auto2.GetModel()<<".\n";
auto2.SetYear(2000);
cout<<"The second automobil is from "<<auto2.GetYear()<<".\n";

Car auto3; 
cout<<"New automobil is from "<<auto3.TestYear()<<". \n";
auto3.Profile(); 
cout<<"New gas level after filling is "<<auto3.Full()<<"liters.\n";
auto3.Profile();
cout<<"New gas level after filling is "<<auto3.Full()<<"liters.\n";
cout<<"New gas level after filling is "<<auto3.Full()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto3.Empty()<<"liters.\n";
auto3.Profile();
cout<<"New gas level after consumption is "<<auto3.Empty()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto3.Empty()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto3.Empty()<<"liters.\n";
auto3.Profile();
cout<<"Compare: \n";
CompareYear(auto2._year, auto3._year);
}

