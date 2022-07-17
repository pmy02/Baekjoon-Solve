#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,cnt;
int board[501][501];
int dp[501][501];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int DFS(int x,int y)
{
    if(dp[x][y]!=-1) return dp[x][y];
    if(x==n&&y==m) return 1;
    dp[x][y]=0;

    for(int i=0;i<4;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx<1||xx>n||yy<1||yy>m) continue;

        if(board[xx][yy]<board[x][y]) dp[x][y]+=DFS(xx,yy);
    }

    return dp[x][y];
}

int main()
{
    cin>>n>>m;

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            scanf("%d",&board[i][j]);
            dp[i][j]=-1;
        }
        
    DFS(1,1);

    printf("%d",dp[1][1]);
    return 0;
}
