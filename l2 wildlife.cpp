#include<iostream>
using namespace std;
class Wildlife
{
	string _species, _gender;
	int _age;
	public:
		void SetSpecies(string s);
		void SetGender(string g);   
		void SetAge(int a);     
		string GetSpecies();
		string GetGender();
		int GetAge();
		int TestAge();
		int TestCompatibility();     
		int Grow();
		int Family();
	Wildlife();
};
void Wildlife::SetSpecies(string s)
{
	_species=s;
}
void Wildlife::SetGender(string g)
{
	_gender=g;
}
void Wildlife::SetAge(int a)
{
	_age=a;
}
string Wildlife::GetSpecies()
{
	return _species;
}
string Wildlife::GetGender()
{
	return _gender;
}
int Wildlife::GetAge()
{
	return _age;
}
int Wildlife::TestAge()
{
	switch(_age)
	{
		case 0:
		cout<<"The animal is a newborn. \n";
		break;
		case 5:
		cout<<"The animal is a teen. \n";
		break;
		case 10:
		cout<<"The animal is an adult. \n";
		break;
		case 15:
		cout<<"The animal is an adult. \n";
		break;
		case 20:
		cout<<"The animal is a adult. \n";
		break;
		case 25:
		cout<<"The animal is old. \n";
		break;
		case 30:
		cout<<"The animal will die soon. \n";
		break;
		default:
		cout<<"Sorry the animal is probably dead.\n\n";
		break;
	}
}
int Wildlife::TestCompatibility()
{
	string u;
	cout<<"\n Enter new animal's gender (male/female) \n";
	cin>>u;
	if(u=="female")
		cout<<"Potential "<<_species<<" family \n";
	else if(u=="male")
		cout<<"You have two "<<_species<<" males \n";
	else
		cout<<"Not in the list \n \n";
	_gender=u;

  }  
int Wildlife::Grow()
{
	if(_age>=0)
	_age+=5;
return _age;
}
Wildlife::Wildlife()
{
	_species="lion";
	_gender="male";
	_age=0;
}
int main()
{
	Wildlife a[5];
	cout<<"Add another animal \n";
	cout<<"\n First animal's species is: "<<a[1].GetSpecies()<<" "<<a[1].GetGender()<<" and has "<<a[1].GetAge()<<" years \n";
		a[1].TestAge();
			cout<<"\nNow it is "<<a[1].Grow()<<" years old \n";
			cout<<"Now it is "<<a[1].Grow()<<" years old \n";
		a[1].TestAge();
			cout<<"\nNow it is "<<a[1].Grow()<<" years old \n";
			cout<<"Now it is "<<a[1].Grow()<<" years old \n";
			cout<<"Now it is "<<a[1].Grow()<<" years old \n";
		a[1].TestAge();
		
	a[2].SetSpecies("lion");
	a[2].SetAge(10);
	a[2].TestCompatibility();
	cout<<"\n Second animal's species is: "<<a[2].GetSpecies()<<" "<<a[2].GetGender()<<" and has "<<a[2].GetAge()<<" years \n";
		a[1].TestAge();
			cout<<"\nNow it is "<<a[1].Grow()<<" years old \n";
		a[1].TestAge();
			cout<<"\nNow it is "<<a[1].Grow()<<" years old \n";
			cout<<"Now it is "<<a[1].Grow()<<" years old \n";
			cout<<"Now it is "<<a[1].Grow()<<" years old \n";
			cout<<"Now it is "<<a[1].Grow()<<" years old \n";
		a[1].TestAge();
	
}

