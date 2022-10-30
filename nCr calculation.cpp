#include <iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
      return 1;
     return n * fact(n-1); 
}
int nCr(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
    int n=6;
    int r=2;
    cout<<n<<"C"<<r<<"="<<nCr(n,r);
    return 0;
}