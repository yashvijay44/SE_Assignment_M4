#include<iostream>
using namespace std;

class math
{
	int n;
	
	public : 
		math()
		{
			cout<<"\n\n\t Enter Number : ";
			cin>>n;
		}
		inline int mul()
		{
			cout<<"\n\t Multiplication = "<<n*n;
		}
		inline void cube()
		{
			cout<<"\n\n\t Cube = "<<n*n*n;
		}
};
main()
{
	math m;
	
	m.mul();
	m.cube();
}
