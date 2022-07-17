#include <bits/stdc++.h>
using namespace std;

int n,i,maxx;
int a[10001];
int dp[10001];

int main()
{
    cin>>n;
    
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    if(n==1) maxx=a[1];
    else if(n==2) maxx=a[1]+a[2];
    else{
        dp[1]=a[1];
        dp[2]=a[1]+a[2];
        for(i=3;i<=n;i++){
            dp[i]=max(a[i]+a[i-1]+dp[i-3],max(a[i]+dp[i-2],dp[i-1]));
            maxx=max(maxx,dp[i]);
        }
    }
    
    printf("%d",maxx);
    return 0;
}
