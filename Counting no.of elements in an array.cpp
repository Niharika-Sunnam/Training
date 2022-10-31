#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,5,2,11,2,2,1,7,2},i,count=0;
    for(i=0;i<=9;i++)
    {
        if(arr[i]==2)
        {
            count++;
        }
    }
    cout<<"Count: "<<count;
    return 0;
}