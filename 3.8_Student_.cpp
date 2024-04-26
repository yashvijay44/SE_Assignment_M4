#include<iostream>
using namespace std;

class student
{
	int roll_no;
	string name, clas;
	double mark;
	string grade;

	public:
		void getdata()
		{
			cout << "\n\t Enter Name  : ";
			cin >> name;
			cout << "\n\t Enter Class : ";
			cin >> clas;
			cout << "\n\t Enter Roll no. : ";
			cin >> roll_no;
			cout << "\n\t Enter Mark : ";
			cin >> mark;
			
			
			if (mark >= 90)
				grade = "A+";
			else if (mark >= 80)
				grade = "A";
			else if (mark >= 70)
				grade = "B";
			else if (mark >= 60)
				grade = "C";
			else
				grade = "D";
		}

		void display_name()
		{
			cout << "\n\t Name : " << name;
		}
		void display_class()
		{
			cout << "\n\t Class : " << clas;
		}
		void display_roll_no()
		{
			cout << "\n\t Roll No : " << roll_no;
		}
		void display_mark()
		{
			cout << "\n\t Mark : " << mark;
		}
		void display_grade()
		{
			cout << "\n\t Grade : " << grade;
		}
};

int main()
{
	student s;

	s.getdata();
	s.display_name();
	s.display_class();
	s.display_roll_no();
	s.display_mark();
	s.display_grade();

	return 0;
}
