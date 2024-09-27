#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<"+i"<<b;
    }
};
int main()
{
    Complex c1,c2;
    c1.input(5,10);
    c1.show();
    c2.show();
}