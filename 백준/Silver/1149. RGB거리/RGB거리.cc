#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int dp[1001][3];

int main()
{
    cin>>n;
    
    for(i=1;i<=n;i++)
        for(j=0;j<3;j++)
            scanf("%d",&dp[i][j]);

    for(i=2;i<=n;i++){
        dp[i][0]+=min(dp[i-1][1],dp[i-1][2]);
        dp[i][1]+=min(dp[i-1][0],dp[i-1][2]);
        dp[i][2]+=min(dp[i-1][0],dp[i-1][1]);
    }
    
    printf("%d",min(dp[n][0],min(dp[n][1],dp[n][2])));
    return 0;
}
