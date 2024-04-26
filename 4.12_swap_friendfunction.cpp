//Swap the two numbers using friend functionwithout using third variable

#include <iostream>
using namespace std;

class Numbers 
{
private:
    int a, b;

public:
    Numbers(int num1, int num2) : a(num1), b(num2) {}

    friend void swapValues(Numbers&);

    void display() 
	{
        cout << "After swapping, A = " << a << " and B = " << b;
    }
};

void swapValues(Numbers& obj)
{
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Numbers obj(num1, num2);

    cout << "Before swapping, A = " << num1 << " and B = " << num2 << endl;

    swapValues(obj);

    obj.display();

    return 0;
}

