#include<iostream>
using namespace std;

class Emp
{
	int id;
	string ename,grad;
	double salary;
	
	public :
		Emp()
		
		{
			cout<<"\n\t Employee Name  :";
			cin>>ename;
			cout<<"\n\t Employee ID  :";
			cin>>id;
			cout<<"\n\t Employee Grad  :";
			cin>>grad;
			
		}
		void en()
		{
			cout<<"\n\t Employee Name  : "<<ename;
		}
		void ei()
		{
			cout<<"\n\t Employee ID  : "<<id;
		}
		void g()
		{
			if(grad=="a")
			
			salary=50000;
						
			else if(grad == "b")
			salary = 40000;

			else
			salary = 25000;

		}
		void sal()
		{
			cout<<"\n\t Employee Salary  : "<<salary;
		}
};
main()
{
	
	Emp e;
	
	e.en();
	e.ei();
	e.g();
	e.sal();
}
