#include<iostream>
using namespace std;
// Create an example class Product, with data members string product_type, string
//product_name, string barcode, float price. Implement setters, getters and a friend function to
//compare prices. 
class Product
{
	string product_type, product_name, barcode;
	float price;
	public:
		void SetType(string t);
		void SetName(string n);
		void SetBarcode(string b);
		void SetPrice(float p);
		string GetType();
		string GetName();
		string GetBarcode();
		float GetPrice();
		Product();
		friend void ComparePrice(Product *pi, Product *p2);
};

	void Product::SetType(string t)
		{
			product_type=t;
		}
	void Product::SetName(string n)
		{
			product_name=n;
		}
	void Product::SetBarcode(string b)
		{
			barcode=b;
		}
	void Product::SetPrice(float p)
		{
			price=p;
		}
		
	string Product::GetType()
		{
			return product_type;
		}
	string Product::GetName()
		{
			return product_name;
		}
	string Product::GetBarcode()
		{
			return barcode;
		}
	float Product::GetPrice()
		{
			return price;
		}
	Product::Product()
	{
		product_type="Kitchen";
		product_name="Fork";
		barcode="k";
		price=9.99;
	}
void ComparePrice(Product *p1, Product *p2)
{
	if(p1->price==p2->price)
		cout<<"Products "<<p1->product_name<<" and "<<p2->product_name<<" have the same price. \n";
		else if (p1->price>p2->price)
			cout<<"Product "<<p1->product_name<<" is more expensive than product "<<p2->product_name<<". \n";
			else
				cout<<"Product "<<p1->product_name<<" is cheaper than product "<<p2->product_name<<". \n";
}

int main ()
{
	Product p1,p2;
	cout<<"The product "<<p1.GetType()<<" "<<p1.GetName()<<" with the barcode "<<p1.GetBarcode()<<" costs $"<<p1.GetPrice()<<".\n";
	p2.SetType("Bedroom ");
	p2.SetName("Pillow ");
	p2.SetBarcode("b ");
	p2.SetPrice(15.99);
	cout<<"The new product is a "<<p2.GetType()<<p2.GetName()<<" with the barcode "<<p2.GetBarcode()<<" that costs $"<<p2.GetPrice()<<".\n";
	ComparePrice(&p1,&p2);
}

