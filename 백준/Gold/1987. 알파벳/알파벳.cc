#include <bits/stdc++.h>
using namespace std;


int n,m,i,j,maxx;
char board[20][20];
int check[26];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};


void DFS(int x,int y,int cnt)
{
    maxx=max(maxx,cnt);

    for(int i=0;i<4;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];

        if(xx<0||xx>=n||yy<0||yy>=m) continue;

        if(!check[board[xx][yy]-'A']){
            check[board[xx][yy]-'A']=1;
            DFS(xx,yy,cnt+1);
            check[board[xx][yy]-'A']=0;
        }
    }
}


int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("\n%c",&board[i][j]);

    check[board[0][0]-'A']=1;
    DFS(0,0,1);

    cout<<maxx;
    return 0;
}
