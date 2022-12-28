#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,x=0,y=0;
   cin>>t;
   while(t--)
   {
       string str;
       cin>>str;
       char a[str.length()+1];
       strcpy(a,str.c_str());
       x=(int) a[0]-48;
       y=(int) a[2]-48;
       int res=x+y;
       cout<<res<<endl;
    }

    return 0;
}
