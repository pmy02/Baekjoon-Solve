#include<bits/stdc++.h>
using namespace std;

int n,v,f,b,cnt;

int main()
{
    cin>>n;
    v=n;
    if(v<10&&v!=0)
    {
        v=v*10+v;
        cnt++;
    }
    do
    {
        f=v/10;
        b=v%10;
        v=b*10+(f+b)%10;
        cnt++;
    }while(v!=n);
    cout<<cnt;
    return 0;
}
