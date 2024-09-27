#include<iostream>
using namespace std;
class Swap
{
    int a,b;
    public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void swapvalue()
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void show()
    {
        cout<<"a = "<<a<<"b = "<<b;
    }
};
int main()
{
    Swap.p;
    p.input(5,7);
    p.swapvalue();
    p.show();
    return 0;

    
}