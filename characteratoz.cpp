#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        char ch ='A';
        for(j=0;j<i+1;j++)
        {
            cout <<ch<<"";
            ch++;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}