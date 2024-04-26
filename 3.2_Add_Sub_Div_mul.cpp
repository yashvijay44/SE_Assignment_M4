#include<iostream>
using namespace std;
class Math
{
	int n1,n2;
	
	public :
		Math()
		
		{
			cout<<"\n\n\t Enter Number 1 : ";
			cin>>n1;
			cout<<"\n\n\t Enter Number 2 : ";
			cin>>n2;	
		}	
		void add()
		{
			cout<<"\n\n\t Addition : "<<n1+n2;
		}
		void sub()
		{
			cout<<"\n\n\t Subtraction : "<<n1-n2;
		}
		void div()
		{
			cout<<"\n\n\t Division : "<<n1/n2;
		}
		void mul()
		{
			cout<<"\n\n\t Multiplication: "<<n1*n2;
		}
		void print()
		{
			cout<<"\n\n\t n1 : "<<n1;
			cout<<"\n\n\t n2 : "<<n2;
		}
};
main()
{
	Math M;
	
	M.print();
	M.add();
	M.sub();
	M.div();
	M.mul();
}
