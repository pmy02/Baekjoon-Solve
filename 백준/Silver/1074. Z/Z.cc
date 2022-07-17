#include <bits/stdc++.h>
using namespace std;

int n,r,c,cnt,res;

void f(int n,int x,int y)
{
    if(r==y&&c==x){
        res=cnt;
        return;
    }
    if(r<y+n&&r>=y&&c<x+n&&c>=x){
        f(n/2,x,y);
        f(n/2,x+n/2,y);
        f(n/2,x,y+n/2);
        f(n/2,x+n/2,y+n/2);
    }
    else cnt+=n*n;
}

int main()
{
    cin>>n>>r>>c;
    f(2<<n-1,0,0);
    printf("%d",res);
}
