#include <bits/stdc++.h>
using namespace std;

int n,i,k,s;
int a[301];
int dp[301];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    dp[1]=a[1];
    dp[2]=a[1]+a[2];
    for(i=3;i<=n;i++)
        dp[i]=max(dp[i-3]+a[i-1]+a[i],dp[i-2]+a[i]);

    printf("%d ",dp[n]);
    return 0;
}
