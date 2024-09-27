// Wap the sum of n natural numbers
#include <iostream> 
using namespace std; 
int main() 
{
    int i,n, sum = 0; 

    cout << " Find the sum of n natural numbers: ";
    cin>>n;
    for (i = 1; i <= n; i++) 
    {
        cout << i << " "; 
        sum = sum + i;
    }
    cout << " \nThe sum of n natural numbers: " << sum << endl; 
}