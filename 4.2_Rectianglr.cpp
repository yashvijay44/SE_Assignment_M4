#include<iostream>
using namespace std;

class Rect
{
	public :
		void setwidth(int w)
		{
			width = w;
		}
		void setheight(int h)
		{
			height = h;
		}
	protected :
		int width;
		int height;
};

class Area : public Rect
{
	public :
		int getarea()
		{
			cout<<"\n\t "<<width<<"*"<<height;
		}
};
main()
{
	Area A;
	
	A.setwidth(5);
	A.setheight(7);
	
	cout<<"Total area : "<<A.getarea();
}
