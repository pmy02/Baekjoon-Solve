#include <bits/stdc++.h>
using namespace std;


struct Data
{
    int first;
    int second;
    int cnt;
};
int n,m,i,j,maxx;
char board[51][51];
int visited[51][51];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};


void BFS(int x,int y)
{
    queue <Data> q;

    visited[x][y]=1;
    q.push({x,y,0});

    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        int z=q.front().cnt;
        q.pop();

        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];

            if(xx<0||xx>=n||yy<0||yy>=m) continue;

            if(board[xx][yy]=='L'&&!visited[xx][yy]){
                visited[xx][yy]=1;
                maxx=max(maxx,z+1);
                q.push({xx,yy,z+1});
            }
        }
    }
}


int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("\n%c",&board[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(board[i][j]=='L'){
                BFS(i,j);
                memset(visited,0,sizeof(visited));
            }

    printf("%d",maxx);
    return 0;
}
