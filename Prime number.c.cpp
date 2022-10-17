#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any integer: ";
    cin>>n;
    int count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            count++;
        }
    }
    if(count==2)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}

