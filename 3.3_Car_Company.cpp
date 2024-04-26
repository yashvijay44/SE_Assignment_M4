#include<iostream>
using namespace std;
class car
{
	int year;
	string company,model;
	
	public :
		car()
		{
			cout<<"\n\t Enter Company Name : ";
			cin>>company;
			cout<<"\n\t Enter Model Name : ";
			cin>>model;
			cout<<"\n\t Enter Year : ";
			cin>>year;
		}
		void com()
		{
			cout<<"\n\n\t Company   : "<<company;
		}
		void mod()
		{
			cout<<"\n\n\t model  :  "<<model;
		}
		void y()
		{
			cout<<"\n\n\t Year   : "<<year;
		}
};
main()
{
	car c;
	
	c.com();
	c.mod();
	c.y();
}
