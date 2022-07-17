#include <bits/stdc++.h>
using namespace std;

int n;
int d[1001];

int dp(int x)
{
    if(x==0) return 1;
    if(x==1) return 0;
    if(x==2) return 3;
    if(d[x]) return d[x];
    
    int sum=3*dp(x-2);
    for(int i=3;i<=x;i++)
        if(i%2==0) sum+=2*dp(x-i);

    return d[x]=sum;
}

int main()
{
    cin>>n;
    
    printf("%d",dp(n));
    return 0;
}
