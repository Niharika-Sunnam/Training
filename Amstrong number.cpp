#include <iostream>
using namespace std;
int main()
{
  int n=153,sum=0,temp=n;
  while(n>0)
  {
      int l = n%10;
      int m = l * l * l;
      cout<<m<<endl;
      n/=10;
      sum+=m;
  }
  if(temp==sum)
  {
      cout<<"It is a Amstrong number.";
  }
  else
  cout<<"No";
  
  return 0;
}
