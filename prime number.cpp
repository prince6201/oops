// WAp to a number is prime or not
#include <iostream> 
using namespace std; 
int main() 
{
    int num1, count = 0; 
    cout << " Check  a number is prime or not: "; 
	cin >> num1; 

    for (int a = 1; a <= num1; a++) 
    {
        if (num1 % a ==0)
        {
            count++; 
        }
    }
    if (count == 2) 
    {
        cout << "Number is a prime number. \n"; 
    }
    else {
        cout << "Number  is not a prime number. \n"; 
    }
}    