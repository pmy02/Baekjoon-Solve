#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
int n,k,i;
long long A=1,B=1,B2,res;

long long mul(long long x,long long y)
{
    if(y>1){
        long long num=mul(x,y/2);
        if(y%2==0) return (num*num)%mod; /// 짝수일 때
        else return ((num*num)%mod*x)%mod; /// 홀수일 때
    }
    else return x;
}

int main()
{
    cin>>n>>k;
    
    /// A = n!
    for(i=1;i<=n;i++){
        A*=i;
        A%=mod;
    }
    /// B = k!
    for(i=1;i<=k;i++){
        B*=i;
        B%=mod;
    }
    /// B = k!(n-k)!
    for(i=1;i<=n-k;i++){
        B*=i;
        B%=mod;
    }

    /// B2 = B^(mod-2)
    B2=mul(B,mod-2);
    res=(A*B2)%mod;

    printf("%lld",res);
    return 0;
}
