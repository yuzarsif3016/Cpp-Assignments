#include<iostream>
using namespace std;
int main()
{
    int n,rev;
    cout<<"Enter Number : ";
    cin>>n;
    while(n>0)
    {
        rev = n % 10;
        cout<<rev;
        n = n / 10;
        
    }
    return 0;
}