#include <iostream>
using namespace std;

class NailGun 
{
int MaxNrNails;
int CrtNrNails;
int LengthNail;
bool Safety;
	public:
void SetMaxNrNails(int Max); 
void SetSafety(bool p); 
void SetLengthNail(int Len);
int GetMaxNrNails (); 
int GetCrtNrNails (); 
int GetLengthNail ();
bool GetSafety(); 
void Fire();
void Load();
void SetSafety();
void ReleaseSafety();
NailGun();
NailGun(int NrMAX, int Length, bool sft);
};

void NailGun:: SetMaxNrNails(int Max) 
	{
	MaxNrNails =Max;
	}
void NailGun:: SetLengthNail(int Len) 
	{
	LengthNail =Len;
	}
void NailGun::SetSafety(bool p) 
	{
	Safety=p;
	}
int NailGun::GetMaxNrNails () 
	{
	return MaxNrNails;
	}
int NailGun::GetLengthNail () 
	{
	return LengthNail;
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
	LengthNail=10;
	Safety=false;
}
NailGun::NailGun(int NrMAX, int Length, bool sft)
{
	cout<<"Using the constructor with 3 arguments. \n";
	MaxNrNails=NrMAX;
	LengthNail=Length;
	Safety=sft;
}
int main()
{
	NailGun p0;
	if(p0.GetSafety()==true)
		{
		cout<<"Implicit NailGun p0 has a max of "<<p0.GetMaxNrNails()<<" nails with the length "<<p0.GetLengthNail()<<" cm and safety set. \n\n";
		}
	else
		{
		cout<<"Implicit NailGun p0 has a max of "<<p0.GetMaxNrNails()<<" nails with the length "<<p0.GetLengthNail()<<" cm and safety released. \n\n";
		}
	NailGun p1(10,5,true);
	if(p1.GetSafety()==true)
		{
		cout<<"Implicit NailGun p1 has a max of "<<p1.GetMaxNrNails()<<" nails with the length "<<p1.GetLengthNail()<<" cm and safety set. \n\n";
		}
	else
		{
		cout<<"Implicit NailGun p1 has a max of "<<p1.GetMaxNrNails()<<" nails with the length "<<p1.GetLengthNail()<<" cm and safety released. \n\n";
		}
}
