//Swap the two values using template

#include<iostream>
using namespace std;

template<class T>
void swapping(T x, T y)
{
		T temp;
		temp=x;
		x=y;
		y=temp;
		
		cout<<"\n\n\t After Swapping ....";
		cout<<"\n\n\t 1 = "<<x;
		cout<<"\n\n\t 2 = "<<y;
}


main()
{
	float a,b;
	
	cout<<"\n\n\t Input value for 1 = ";
	cin>>a;
	cout<<"\n\n\t Input value for 2 = ";
	cin>>b;
	cout<<"\n\n\t Before Swapping ....";
	cout<<"\n\n\t 1 = "<<a;
	cout<<"\n\n\t 2 = "<<b;
	swapping(a, b);
}
