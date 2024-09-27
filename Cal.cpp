#include <iostream>
using namespace std;

struct Calculator
{
    int a = 0, b = 0, c = 0;

    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    } 

    void addition() 
    {
        c = a + b;
        cout << "Addition of two numbers: " << c << endl;
    }

    void subtraction()
    {
        c = a - b;
        cout << "Subtraction of two numbers: " << c << endl;
    }

    void multiplication()
    {
        c = a * b;
        cout << "Multiplication of two numbers: " << c << endl;
    }

    void division()
    {
        if (b != 0) 
        {
            c = a / b;
            cout << "Division of two numbers: " << c << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
};

int main()
{
    Calculator calc;
    calc.input();
    calc.addition();
    calc.subtraction();
    calc.multiplication();
    calc.division();
    return 0;
}
