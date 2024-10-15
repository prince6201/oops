#include<iostream>
using namespace std;
int checkPrimenumber(int num)
{
    if(num % 2 == 0 )
       cout<<num<<" is a not prime number";
    else
        cout<<num<<" is a prime number";

    return 0;    
}
int main()
{
    cout<<"Check the Prime Number = "<<checkPrimenumber(17)<<endl;
}