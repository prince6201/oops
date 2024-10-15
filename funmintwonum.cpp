#include<iostream>
using namespace std;
int mintwonum(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout<<"Minium Two Number = "<<mintwonum(7,5)<<endl;
}