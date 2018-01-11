#include <iostream>
using namespace std;

class NailGun 
{
int MaxNrNails;
int CrtNrNails;
bool Safety;
	public:
void SetMaxNrNails(int Max); 
void SetSafety(bool p); 
int GetMaxNrNails (); 
int GetCrtNrNails (); 
bool GetSafety(); 
void Fire();
void Load();
void SetSafety();
void ReleaseSafety();
NailGun();
NailGun(int NrMAX, bool sft);
};

void NailGun:: SetMaxNrNails(int Max) 
	{
	MaxNrNails =Max;
	}
void NailGun::SetSafety(bool p) 
	{
	Safety=p;
	}
int NailGun::GetMaxNrNails () 
	{
	return MaxNrNails;
	}
int NailGun:: GetCrtNrNails () 
	{
	return CrtNrNails;
	}
bool NailGun::GetSafety() 
	{
	return Safety;
	}
void NailGun::Fire()
{
if(Safety==true)
	{
		cout<<"Safety set, can’t fire.";
	}
else
	{
	if(CrtNrNails>0)
		{
		CrtNrNails--;
		cout<<"FIRE !";
		}
else
		{
		cout<<"Out of nails!";
		}
	}
}
void NailGun::Load()
{
	if (CrtNrNails==MaxNrNails)
		{
		cout<<"NailGun is already loaded !!!";
		}
	else
		{
		CrtNrNails=MaxNrNails;
		}
}
void NailGun::SetSafety ()
{
	if(Safety==true)
		{
		cout<<"Safety already set.";
		}
	else
		{
		Safety=true;
		}
}
void NailGun::ReleaseSafety()
{
	if(Safety==false)
		{
		cout<<"Safety already released.";
		}
	else
		{
		Safety=false;
		}
}
NailGun::NailGun()
{
	cout<<"Using the implicit constructor \n";
	MaxNrNails=5;
	Safety=false;
}
NailGun::NailGun(int NrMAX, bool sft)
{
	cout<<"Using the constructor with 2 arguments. \n";
	MaxNrNails=NrMAX;
	Safety=sft;
}
int main()
{
	NailGun p0;
	if(p0.GetSafety()==true)
		{
		cout<<"Implicit NailGun p0 has a max of "<<p0.GetMaxNrNails()<<" nails and safety set. \n\n";
		}
	else
		{
		cout<<"Implicit NailGun p0 has a max of"<<p0.GetMaxNrNails()<<" nails and safety released. \n\n";
		}
	NailGun p1(10,true);
	if(p1.GetSafety()==true)
		{
		cout<<"Implicit NailGun p1 has a max of "<<p1.GetMaxNrNails()<<" nails and safety set. \n\n";
		}
	else
		{
		cout<<"Implicit NailGun p1 has a max of"<<p1.GetMaxNrNails()<<" nails and safety released. \n\n";
		}
}
