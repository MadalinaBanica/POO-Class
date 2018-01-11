#include <iostream>
using namespace std;
class Coffee
{
string origin;
int quantity;
public:
void SetOrigin(string o);
void SetQuantity(int q);
string GetOrigin();
int GetQuantity();
Coffee();
Coffee(string org, int qnt);
};
void Coffee::SetOrigin(string o)
{
origin=o;
}
void Coffee::SetQuantity(int q)
{
quantity=q;
}
string Coffee::GetOrigin()
{
return origin;
}
int Coffee::GetQuantity ()
{
return quantity;
}
Coffee::Coffee()
{
origin="Ethiopia";
quantity=1.5;
cout<<"Called the implicit constructor "<<endl;
}
Coffee::Coffee(string org, int qnt)
{
origin=org;
quantity=qnt;
cout<<"Called the constructor with 2 arguments "<<endl;
}
int main()
{
Coffee c0;
cout<<"Coffee c0 has (implicit) origin "<<c0.GetOrigin()<<" and (implicit) bag size of "<<c0.GetQuantity()<<" kilos "<<endl;
Coffee c1;
c1.SetOrigin("Sicilia");
c1.SetQuantity(2);
cout<<"Coffee c1 has the origin "<<c1.GetOrigin()<<" and the bag size of "<<c1.GetQuantity()<<" kilos "<<endl;
Coffee c2("Congo",1);
cout<<"Coffee c2 has the origin "<<c2.GetOrigin()<<" and the bag size of "<<c2.GetQuantity()<<" kilos "<<endl;
return 0;
}
