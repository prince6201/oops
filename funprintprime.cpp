#include<iostream>
#include<math.h>
using namespace std;
int primenumber(int num)
{
    for(int i=2; i<=num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true ;

}
int main()
{
    int a,b;
    cout<<"Enter a two number : ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(primenumber(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}