#include <bits/stdc++.h>
using namespace std;

#define MAX 987654321

int n,k,i,j;
int num[100];
int dp[10001];

int main()
{
    cin>>n>>k;

    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    sort(num,num+n);

    for(i=1;i<=k;i++) dp[i]=MAX;
    for(i=0;i<n;i++)
        for(j=num[i];j<=k;j++)
            dp[j]=min(dp[j],dp[j-num[i]]+1);


    if(dp[k]!=MAX) printf("%d",dp[k]);
    else printf("-1");

    return 0;
}
