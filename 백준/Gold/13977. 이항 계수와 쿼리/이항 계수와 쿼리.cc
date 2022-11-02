#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
int m,n,k,i,j;
long long factorial[4000001];

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
    /// 사전에 팩토리얼 값 구하기
    factorial[0]=1;
	for(i=1;i<=4000000;i++)
		factorial[i]=factorial[i-1]*i%mod;

    cin>>m;
    for(j=0;j<m;j++){

        long long A=1,B=1,B2=0,res=0;
        scanf("%d %d",&n,&k);

        /// A = n!
        A=factorial[n];
        /// B = k!(n-k)!
        B=(factorial[k]*factorial[n-k])%mod;

        /// B2 = B^(mod-2)
        B2=mul(B,mod-2);
        res=((A%mod)*(B2%mod))%mod;

        printf("%lld\n",res);
    }

    return 0;
}
