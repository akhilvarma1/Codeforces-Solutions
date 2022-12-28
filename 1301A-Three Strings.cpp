#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string a,b,c;
      cin>>a>>b>>c;
      int n=a.length();
      int x=0,temp=0;
      for(int i=0;i<n;i++)
      {
          
              if(c[i]==a[i]|| c[i]==b[i])
              {
                  x++;
              }
      }
      if(x==n)
      {
          temp=1;
      }
      
      if(temp==1)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
    return 0;
}
