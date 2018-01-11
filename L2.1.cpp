#include<iostream>
using namespace std;
class Complex
{
	double_re;
	double_im;
	public:
		void Re();
		void Im();
		Complex();
		
};

void Complex::Re(double r)
{
	_re=r;
}
void Complex::Im(double i)
{
	_im=i;
}

double Complex::Re()
{
	return_re;
}
double Complex::Im()
{
	reurn_im;
}

Complex::Complex()
{
	_re=0.0;
	_im=0.0;
}

int main()
{
	double real,imag;
	Complex c0;
	cout<<"real part is:";
	cin>>real;
	cout<<"imaginary part is:";
	cin>>imag;
	c0.Re(real);
	c0.Im(imag);
	cout<<"Complex number entered:"<<c0.Re()<<" + "<<c0.Im()<<"i/n";
	Complex c1;
	c1.Re(2.0);
	c1.Im(3.5);
	cout<<"Complex no obtained by using implicit constructor is:"<<c2.Re()<<" + "<<c2.Im()<<"i/n";
	retrun 0;
}
