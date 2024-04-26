#include<iostream>
using namespace std;

class Triangle
{
	double s1,s2,s3;
	
	public : 
	void getdata()
	{
		cout<<"\n\n\t Enter the Lengths of the three side of triangle ";
		cout<<"\n\t side 1  : ";
		cin>>s1;
		cout<<"\n\t side 2  : ";
		cin>>s2;
		cout<<"\n\t side 3  : ";
		cin>>s3;
	}
	
	void determinetype()
	{
		if(s1 == s2 && s2 == s3 && s3 == s1)
		cout<<"\n\t Euilateral Triangle ";
		else if(s1 == s2 || s1 == s3 || s2 == s3)
		cout<<" \n\t Isosceles Triangle ";
		else
		cout<<" \n\t Scalene Triangle";
	}
};
main()
{

Triangle T;
T.getdata();

T.determinetype();
}
