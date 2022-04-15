#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[1000],b[1000];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        sort(a,a+m);
        sort(b,b+n);
        int flag=0,x=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    flag=1;
                    x=a[i];
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            cout<<"1 "<<x<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
