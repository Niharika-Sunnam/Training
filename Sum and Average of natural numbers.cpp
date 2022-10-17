#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {
        sum+=i;
        avg=(float)sum/10;
    }
    cout<<sum<<endl;
    cout<<avg;
    return 0;
}
