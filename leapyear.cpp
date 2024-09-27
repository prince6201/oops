#include<iostream>
using namespace std;
int main()
{
    int Year;
    cout<<"Enter the Year :";
    cin>>Year;
    if(Year % 4 == 0)
       cout<<Year<<" : is a leap year";
    else
       cout<<Year<<" : is a not leap year";

    return 0;

       
}