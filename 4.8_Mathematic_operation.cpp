// math operations using the function overloading.

#include<iostream>
using namespace std;

class MathOperations 
{
public:
    int add(int a, int b) 
	{
        return a + b;
    }

    float add(float a, float b) 
	{
        return a + b;
    }

    int subtract(int a, int b) 
	{
        return a - b;
    }

    float subtract(float a, float b) 
	{
        return a - b;
    }

    int multiply(int a, int b) 
	{
        return a * b;
    }

    float multiply(float a, float b) 
	{
        return a * b;
    }

    int divide(int a, int b) 
	{
        if (b != 0) 
		{
            return a / b;
        } else {
            cout << "Cannot divide by zero\n";
            return 0;
        }
    }

    float divide(float a, float b) 
	{
        if (b != 0) 
		{
            return a / b;
        } else {
            cout << "Cannot divide by zero\n";
            return 0;
        }
    }
};

int main() 
{
    MathOperations calculator;

    
    cout << "Integer Operations:\n";
    cout << "Addition: " << calculator.add(8, 4) << "\n"; 
    cout << "Subtraction: " << calculator.subtract(8, 4) << "\n";  
    cout << "Multiplication: " << calculator.multiply(8, 4) << "\n";  
    cout << "Division: " << calculator.divide(8, 4) << "\n";  

    
    cout << "\nFloating-point Operations:\n";
    cout << "Addition: " << calculator.add(8.8f, 4.4f) << "\n"; 
    cout << "Subtraction: " << calculator.subtract(8.8f, 4.4f) << "\n";
    cout << "Multiplication: " << calculator.multiply(8.8f, 4.4f) << "\n";  
    cout << "Division: " << calculator.divide(8.8f, 4.4f) << "\n";  

    return 0;
}

