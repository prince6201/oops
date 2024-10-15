#include<iostream>
using namespace std;
int calNfactoril(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    cout<<"Calculater N factoril = "<<calNfactoril(6)<<endl; 
}