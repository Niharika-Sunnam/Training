#include<iostream>
using namespace std;
int main()
{
    int a1,a2,n,d,An;
    cout<<"Enter a1: ";
    cin>>a1;
    
    cout<<"Enter a2: ";
    cin>>a2;
    
    d=a1-a2;
    cout<<"d is: ";
    cout<<d<<endl;
    
    
    cout<<"Enter n: ";
    cin>>n;
    An = a1 + (n-1) * d;
    cout<<"An is: ";
    cout<<An<<endl;
    
    
    return 0;
}