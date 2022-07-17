#include <bits/stdc++.h>
using namespace std;

int n,i;
int dp[1000001];

int main()
{
    dp[1]=1;
    dp[2]=2;
    cin>>n;
    for(i=3;i<=n;i++)
        dp[i]=(dp[i-1]+dp[i-2])%15746;

    printf("%d",dp[n]);
    return 0;
}
