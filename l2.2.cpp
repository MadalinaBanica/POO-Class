#include <iostream>
using namespace std; 
class Person
{
string _surname,_name; 
int _age,_weight;
public:
void Surname(string n); 
void Name(string p); 
string Name(); 
string Surname(); 
void Age(int a); 
int Age(); 
int TestAge(); 
int Eat();
int Diet();
int Profile();
Person();
};
void Person::Surname(string n) 
{
_surname=n;
}
void Person::Name(string p) 
{
_name=p;
}
string Person::Surname() 
{
return _surname;
}
string Person::Name() 
{
return _name;
}
int Person::Age() 
{
return _age;
}
void Person::Age(int a)
{
_age=a;
}
int Person::TestAge()
{
int a;
do
{
cout<<"Insert person age : ";
cin>>a;
}while(a<0 || a>200); 
_age=a;
return _age;
}
int Person::Eat()
{
if(_weight<=80)
{
_weight=_weight+10;
}
else{
cout<<"Person can’t eat anymore and need to diet first.\n";
}
return _weight;
}
int Person::Diet()
{
if(_weight<=30)
{
cout<<"Person too thin to diet and needs to eat first.\n";
}
else{
_weight=_weight-10;
}
return _weight;
}
int Person::Profile()
{
switch(_weight)
{
case 30:
cout<<"Person is underweight.\n";
break;
case 40:
cout<<"Person is too thin.\n";
break;
case 50:
cout<<"Person is thin.\n";
break;
case 60:
cout<<"Person is normal.\n";
break;
case 70:
cout<<"Person is a little overweight.\n";
break;
case 80:
cout<<"Person is overweight\n";
break;
default:
cout<<"Error establishing profile.\n";
break;
}
}
Person::Person() 
{
_surname="Doe";
_name="John";
_age=30;
_weight=60;
}
int main()
{
Person standard;
cout <<"Complete implicit student name is : "<<standard.Name()<<"
"<<standard.Surname()<<"\n";
Person student;
student.Surname("Smith");
and the _surname attribute for the object will take the value "Smith"
student.Name("John");
cout <<"Student "<<student.Name()<<" "<<student.Surname()<<" is
"<<student.Age()<<" years old.\n";
student.Age(40);
cout<<"New student age is "<<student.Age()<<" years old.\n";
cout<<"New student age is "<<student.TestAge()<<" years old. \n";
Person p4; 
p4.Profile(); 
cout<<"New weight after eating is "<<p4.Eat()<<"kg.\n";
p4.Profile();
cout<<"New weight after eating is "<<p4.Eat()<<"kg. \n";
p4.Profile();
cout<<"New weight after eating is "<<p4.Eat()<<"kg. \n";
p4.Profile();
cout<<"New weight after eating is "<<p4.Eat()<<"kg. \n";
cout<<"New weight after eating is "<<p4.Eat()<<"kg. \n";
cout<<"New weight after dieting is "<<p4.Diet()<<"kg. \n";
cout<<"New weight after dieting is "<<p4.Diet()<<"kg. \n";
p4.Profile();
cout<<"New weight after dieting is "<<p4.Diet()<<"kg. \n";
cout<<"New weight after dieting is "<<p4.Diet()<<"kg. \n";
p4.Profile();
cout<<"New weight after dieting is "<<p4.Diet()<<"kg. \n";
cout<<"New weight after dieting is "<<p4.Diet()<<"kg. \n";
cout<<"New weight after dieting is "<<p4.Diet()<<"kg. \n";
p4.Profile();
}

