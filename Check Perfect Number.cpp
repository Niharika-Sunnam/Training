#include<iostream>
using namespace std;
int main()
{
	int n,i,sum = 0;
	cout<<"Enter the Number: ";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
    	cout<<"is a Perfect Number";
	}
	else
	{
		cout<<" is Not a Perfect Number";
	}
 	return 0;
}
