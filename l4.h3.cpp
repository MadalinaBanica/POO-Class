//H4.2. Modify the example to implement an inherited class DiscountedProduct, which also
//has a data member float discount which applies to the product_name, if the product_type is
//“discount”. By default, products have no discount (unless otherwise set).
#include<iostream>
using namespace std;

class Product
{
	string product_type, barcode;
	public:
	float price;
	string  product_name;
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

class DiscountedProduct:public Product
{
	float discount=0;
	public:
		void SetDiscount( float d)
		{
			discount=d;
		}
		float GetDiscount()
		{
			return discount;
		}
		friend void Discount(DiscountedProduct *p,DiscountedProduct *r);
};
void Discount(DiscountedProduct *p,DiscountedProduct *r)
{
	if(p->product_name==r->product_name)
	p->price-=p->price*r->discount/100;

}
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
		product_type="Soft Drink";
		product_name="Cola";
		barcode="1234";
		price=3.99;
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
	DiscountedProduct p1,p2,p3;
		cout<<"The product "<<p1.GetType()<<" "<<p1.GetName()<<" with the barcode "<<p1.GetBarcode()<<" costs $"<<p1.GetPrice()<<".\n";
	p2.SetType("Food ");
	p2.SetName("Fruit ");
	p2.SetBarcode("2222");
		cout<<"The new product is a "<<p2.GetType()<<p2.GetName()<<" with the barcode "<<p2.GetBarcode()<<" that costs $"<<p2.GetPrice()<<".\n";
	ComparePrice(&p1,&p2);
	p3.SetType("Discounted");
	p3.SetBarcode("0000");
	p3.SetPrice(0.00);
	p3.SetDiscount(75);
		cout<<endl<<p1.GetType()<<" "<<p1.GetName()<<" "<<p1.GetBarcode()<<" "<<p1.GetPrice()<<" "<<p1.GetDiscount()<<endl;
		cout<<p2.GetType()<<" "<<p2.GetName()<<" "<<p2.GetBarcode()<<" "<<p2.GetPrice()<<" "<<p2.GetDiscount()<<endl;
		cout<<p3.GetType()<<" "<<p3.GetName()<<" "<<p3.GetBarcode()<<" "<<p3.GetPrice()<<" "<<p3.GetDiscount()<<endl<<endl;
	Discount(&p1,&p3);
		cout<<"You have to pay $"<<p1.GetPrice()+p2.GetPrice();
	
	
}

