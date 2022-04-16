#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        cout<<str<<endl;
    }
}
