#include <bits/stdc++.h>
using namespace std;

int n,k,a,i,j;
int dp[10001];

int main()
{
    dp[0]=1;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=a;j<=k;j++)
            dp[j]+=dp[j-a];
    }

    printf("%d",dp[k]);
    return 0;
}
