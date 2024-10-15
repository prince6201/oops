#include<iostream>
using namespace std;
int sumnnum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    cout<<"Sum N number = "<<sumnnum(6)<<endl;
    cout<<"Sum N number = "<<sumnnum(10)<<endl;
    return 0;
}