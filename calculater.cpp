#include<iostream>
using namespace std;
struct calculater
{
    int a=0,b=0,c=0;
    void input()
    {
        cout<<"Enter two number";
        cin>>a>>b;
    } 
    void addition() 
    {
        c = a+b;
        cout<<"addition two number"<<c<<endl;
    }
    void subtraction()
    {
        c = a-b;
        cout<<"subtraction two number"<<c<<endl;
    }
    void multiplication()
    {
        c = a*b;
        cout<<"multiplication two number"<<c<<endl;
    }
    void division()
    {
       c = a/b;
        cout<<"devision two number"<<c<<endl;
    }

}d;
int main()
{
    d.addition();
    d.subtraction();
    d.multiplication();
    d.division();
    return 0;

}