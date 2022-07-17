#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int first;
    int second;
    int num;
};
queue <Data> q;
int n,m,i,j;
int board[100][100];
int v[100][100];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};


int maze(int a,int b)
{
    v[a][b]=1;
    q.push({a,b,1});

    while(!q.empty()){
        a=q.front().first;
        b=q.front().second;
        int cnt=q.front().num;

        q.pop();

        for(int i=0;i<4;i++){
            int xx=a+x[i];
            int yy=b+y[i];
            if(xx<0||xx>=n||yy<0||yy>=m) continue;
            if(xx==n-1&&yy==m-1) return cnt+1;
            if(board[xx][yy]&&v[xx][yy]==0){
                v[xx][yy]=1;
                q.push({xx,yy,cnt+1});
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%1d",&board[i][j]);

    printf("%d",maze(0,0));
    return 0;
}