#include<iostream>
using namespace std;

class student
{

    string sroll;

public:
    void get_sroll()
    {
        sroll = "05";
        cout << "\n\n\t Student Roll no. : " << sroll;
    }
};

class test : public student
{
protected:
    int sub1, sub2;

public:
    void get_sub()
    {
        sub1 = 65;
        sub2 = 75;
        cout << "\n\t Sub1 Mark : " << sub1;
        cout << "\n\t Sub2 Mark : " << sub2;
    }
};

class result : public test
{
protected:
    int total;

public:
    void get_result()
    {
        total = sub1 + sub2;
        cout << "\n\n\t Sub1 + Sub2 = Result: " << sub1 << " + " << sub2 << " = " << total;
    }
};

int main()
{
    result r;

    r.get_sroll();
    r.get_sub();
    r.get_result();

    return 0;
}
