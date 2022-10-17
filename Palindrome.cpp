#include <iostream>
#include<bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter any numbers: ";
    cin>>n;
    string str=to_string(n);
    reverse(str.begin(), str.end());
    int t;
    t = stoi(str);
    if(n==t)
    {
        cout<<"Palindrome";
    }
    else
    cout<<"No";
    return 0;
}
