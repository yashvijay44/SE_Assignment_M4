#include<iostream>
using namespace std;

class Base
{
	private : int a;  
	
	protected : int b; 
	
	public : int c; 
	
			int get_a()
			{
				a=50;
				return a;
			}
				
};


class Derived : public Base
{
	public :
			int get_b()
			{
				cout<<"\n\n\t Private Value : A = "<<get_a();
				b=60;  
				return b;
			}
			
			int get_c()
			{
				c=70; 
				return c;
			}			
};

main()
{
	Derived D;
	cout<<"\n\n\t Protected Value : B = "<<D.get_b();
	cout<<"\n\n\t Public Value : C = "<<D.get_c();
	D.c=50; 
	cout<<"\n\n\t Public Value (Changed in main): C = "<<D.c;
	
}
