#include <iostream>

using namespace std;

int main()
{
    int n,s,c=0,x=0,y=0;
    cin>>n>>s;
    c=s/n;
    x=c*n;
    y=s-x;
    if(y==0)
    cout<<c;
    else
    cout<<c+1;

    return 0;
}
