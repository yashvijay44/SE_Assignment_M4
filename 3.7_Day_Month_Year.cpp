#include<iostream>
using namespace std;

class day
{
	int d, m, y;
	
	public:
		void getdata()
		{
			cout << "\n\n\t Enter Day = Month = Year";
			cout << "\n\t Enter Day  : ";
			cin >> d;
			cout << "\n\t Enter Month : ";
			cin >> m;
			cout << "\n\t Enter Year : ";
			cin >> y;
		}
		
		void day1()
		{
			cout << "\n\t : " << d;
		}
		void month()
		{
			cout << "\n\t : " << m;
		}
		void year()
		{
			cout << "\n\t : " << y;
		}
		void ch()
		{
			if (d < 1 || d > 31)
				cout << "\n\t False";
			if (m < 1 || m > 12)
				cout << "\n\t False";
			if ((m == 4 || m == 6 || m == 11) && d > 30)
				cout << "\n\t False";
			if (m == 2)
			{
				if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
				{
					if (d > 29)
						cout << "\n\t False";
				}
				else if (d > 28)
					cout << "\n\t False";
			}
			cout << "\n\t True";
		}
};

int main()
{
	day d;
	
	d.getdata();
	d.day1();
	d.month();
	d.year();
	d.ch();
	
	return 0;
}
