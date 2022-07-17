#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,maxx;
int d[1001][1001];

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%1d",&d[i][j]);

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(d[i][j])
            {
                d[i][j]=min(d[i-1][j],min(d[i][j-1],d[i-1][j-1]))+1;
                maxx=max(maxx,d[i][j]);
            }

    printf("%d",maxx*maxx);
    return 0;
}
