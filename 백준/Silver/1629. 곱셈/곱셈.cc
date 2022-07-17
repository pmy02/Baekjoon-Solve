#include <bits/stdc++.h>
using namespace std;

int a,b,c;


long long f(int x,int y,int mod)
{
    if(y>1){
        long long mul=f(x,y/2,mod);
        if(y%2==0) return (mul*mul)%mod;
        else return ((mul*mul)%mod*x)%mod;
    }
    else return x;
}

int main()
{
    cin>>a>>b>>c;

    printf("%lld",f(a%c,b,c));
    return 0;
}
