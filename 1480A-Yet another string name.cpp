#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(str[i]=='a')
                {
                    cout<<"b";
                }
                else
                {
                    cout<<"a";
                }
            }
            else
            {
                if(str[i]=='z')
                {
                    cout<<"y";
                }
                else
                {
                    cout<<"z";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
