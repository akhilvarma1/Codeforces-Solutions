#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string str;
   cin>>str;
   sort(str.begin(),str.end());
   int o=0,z=0;
   for(int i=0;i<n;i++)
   {
       if(str[i]=='n')
       {
           o++;
       }
       else if(str[i]=='z')
       {
           z++;
       }
   }
   while(o>0)
   {
       cout<<"1 ";
       o--;
   }
   while(z>0)
   {
       cout<<"0 ";
       z--;
   }
   return 0;
}
