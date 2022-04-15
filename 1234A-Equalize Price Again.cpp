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
       int n;
       cin>>n;
       int a,sum=0;
       for(int i=0;i<n;i++)
       {
           a=0;
           cin>>a;
           sum+=a;
       }
       long long int x=ceil((double)sum/n);
       
       cout<<x<<endl;
 
    }
    return 0;
}
