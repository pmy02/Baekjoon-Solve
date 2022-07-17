#include <bits/stdc++.h>
using namespace std;

int i,j,n,ans;
int d[501][501];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            scanf("%d",&d[i][j]);

    }
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            d[i][j]=max(d[i][j]+d[i-1][j-1],d[i][j]+d[i-1][j]);


    for(i=1;i<=n;i++)
        ans=max(ans,d[n][i]);

    printf("%d",ans);
    return 0;
}

