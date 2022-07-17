#include <bits/stdc++.h>
using namespace std;

int n,i,maxx=-987654321;
int a[100001];
int dp[100001];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<=n;i++){
        dp[i]=max(a[i]+dp[i-1],max(a[i]+a[i-1],a[i]));
        maxx=max(maxx,dp[i]);
    }

    printf("%d",maxx);
    return 0;
}
