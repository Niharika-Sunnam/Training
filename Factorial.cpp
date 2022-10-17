#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any integer: ";
    cin>>n;
    int res=1;
    for(i=1;i<=n;i++)
    {
        res=res*i;
    }
    cout<<res;
    return 0;
}
