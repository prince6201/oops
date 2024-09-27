#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to be checked :";
    cin >> num;
    if(num % 2 == 0)
       cout<<num<<"is even";
    else
       cout<<num<<"is not even";
       return 0 ;
}       