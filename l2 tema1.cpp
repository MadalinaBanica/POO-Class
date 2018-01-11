#include <iostream>
using namespace std; 
class Car
{
string _brandname, _model; 
int _year, _liters;
public:
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
cout<<"Insert car's year : ";
cin>>y;
}while(y<1900 || y>2018); 
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
Car::Car() 
{
_brandname="MiniCooper";
_model="Countryman";
_year=2015;
_liters=30;
}
int main()
{
Car standard;
cout <<"Car's brand is : "<<standard.GetBrand()<<" "<<standard.GetModel()<<"\n";
Car automobil;
automobil.SetBrand("Audi");
automobil.SetModel("A3");
cout <<"Automobil "<<automobil.GetBrand()<<" "<<automobil.GetModel()<<" is from "<<automobil.GetYear()<<".\n";
automobil.SetYear(2000);
cout<<"New automobil is from "<<automobil.GetYear()<<".\n";
cout<<"New automobil is from "<<automobil.TestYear()<<". \n";
Car auto2; 
auto2.Profile(); 
cout<<"New gas level after filling is "<<auto2.Full()<<"liters.\n";
auto2.Profile();
cout<<"New gas level after filling is "<<auto2.Full()<<"liters.\n";
auto2.Profile();
cout<<"New gas level after filling is "<<auto2.Full()<<"liters.\n";
auto2.Profile();
cout<<"New gas level after filling is "<<auto2.Full()<<"liters.\n";
cout<<"New gas level after filling is "<<auto2.Full()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto2.Empty()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto2.Empty()<<"liters.\n";
auto2.Profile();
cout<<"New gas level after consumption is "<<auto2.Empty()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto2.Empty()<<"liters.\n";
auto2.Profile();
cout<<"New gas level after consumption is "<<auto2.Empty()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto2.Empty()<<"liters.\n";
cout<<"New gas level after consumption is "<<auto2.Empty()<<"liters.\n";
auto2.Profile();
}

