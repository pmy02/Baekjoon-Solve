#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,ans,sx,sy,dx,dy;
int board[302][302];


int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&board[i][j]);
    
    /// 전처리
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            board[i][j+1]+=board[i][j];

    for(j=1;j<=m;j++)
        for(i=1;i<=n;i++)
            board[i+1][j]+=board[i][j];
    
    cin>>n;
    while(n--){
        scanf("%d %d %d %d",&sx,&sy,&dx,&dy);
        ans=board[dx][dy]-board[sx-1][dy]-board[dx][sy-1]+board[sx-1][sy-1];
        printf("%d\n",ans);
    }
    return 0;
}
