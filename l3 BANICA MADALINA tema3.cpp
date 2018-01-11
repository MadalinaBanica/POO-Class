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
friend bool CompareCoffee(const void*, const void *); 
Coffee(const Coffee&);
};
void DecisionMessage (unsigned int*, Coffee*, Coffee*, bool (*pFctCompare)(const void *a, const void *b)); 
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
bool CompareCoffee(const void *pC1, const void *pC2)
{
return ((*(Coffee*)pC1).GetOrigin() == (*(Coffee*)pC2).GetOrigin()) ? true : false;
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
Coffee::Coffee(const Coffee& c1)
{
cout<<"copy constructor called" << endl;
origin = c1.origin;
quantity = c1.quantity;
}
int main()
{
Coffee c0;
cout<<"Coffee c0 has (implicit) origin "<<c0.GetOrigin()<<" and (implicit) bag size of "<<c0.GetQuantity()<<" kilos "<<endl;
Coffee c1;
c1.SetOrigin("Sicilia");
c1.SetQuantity(2);
cout<<"Coffee c1 has the origin "<<c1.GetOrigin()<<" and the bag size of "<<c1.GetQuantity()<<" kilos "<<endl;
Coffee c2("Ethiopia",1);
cout<<"Coffee c2 has the origin "<<c2.GetOrigin()<<" and the bag size of "<<c2.GetQuantity()<<" kilos "<<endl;
Coffee c3 = c2;
cout<<"Coffee c3 has origin "<<c3.GetOrigin()<<" and bag size of "<<c3.GetQuantity()<<" kilos "<<endl;

unsigned int decision = 2; 
cout << endl;
cout << "Decision before comparing objects: " << decision << endl;
Coffee *pCoffee0 = &c0, *pCoffee2 = &c2;
DecisionMessage(&decision, pCoffee0, pCoffee2, CompareCoffee);
cout << "Decision after comparison is " << decision << ", meaning: " << ((decision) ?"Same origin " : "Different origins") << endl;
return 0;
}
void DecisionMessage(unsigned int *pDecision,Coffee *pC1,Coffee *pC2,bool (*pFctCompare)(const void *a, const void *b))
{
if( 1 == pFctCompare((Coffee*)pC1, (Coffee*)pC2) )
*pDecision = true;
else
*pDecision = false;
}
