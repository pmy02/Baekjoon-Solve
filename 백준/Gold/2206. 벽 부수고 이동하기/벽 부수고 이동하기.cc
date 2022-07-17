#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int first;
    int second;
    int wall;
    int num;
};
queue <Data> q;
int n,m,i,j;
int board[1001][1001];
int v[2][1001][1001];
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};


int minimum(int a,int b)
{
    q.push({a,b,0,1});
    v[0][a][b]=1;

    while(!q.empty()){
        a=q.front().first;
        b=q.front().second;
        int wal=q.front().wall;
        int cnt=q.front().num;
        q.pop();

        if(a==n&&b==m) return cnt;

        for(int i=0;i<4;i++){
            int xx=a+x[i];
            int yy=b+y[i];

            if(xx<1||xx>n||yy<1||yy>m) continue;

            if(!board[xx][yy]){
                if(wal&&!v[1][xx][yy]){
                    v[1][xx][yy]=1;
                    q.push({xx,yy,wal,cnt+1});
                }
                else if(!wal&&!v[0][xx][yy]){
                    v[0][xx][yy]=1;
                    q.push({xx,yy,wal,cnt+1});
                }
            }
            else if(board[xx][yy]&&!wal&&!v[0][xx][yy]){
                v[1][xx][yy]=1;
                q.push({xx,yy,1,cnt+1});
            }
        }
    }
    return -1;
}


int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%1d",&board[i][j]);

    printf("%d",minimum(1,1));
    return 0;
}
