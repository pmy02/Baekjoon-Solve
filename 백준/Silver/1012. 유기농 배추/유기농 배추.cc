#include<bits/stdc++.h>
using namespace std;

queue <pair<int,int> > q;
int t,n,m,k,i,j,a,b;
int board[50][50];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};


void cabbage(int a,int b)
{
    board[a][b]=0;
    q.push({a,b});

    while(!q.empty()){
        a=q.front().first;
        b=q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int xx=a+x[i];
            int yy=b+y[i];
            if(xx<0||xx>=n||yy<0||yy>=m) continue;

            if(board[xx][yy]){
                board[xx][yy]=0;
                q.push({xx,yy});
            }
        }
    }
}

int main()
{
    cin>>t;
    
    while(t--){
        cin>>n>>m>>k;
        for(i=0;i<k;i++){
            scanf("%d %d",&a,&b);
            board[a][b]=1;
        }

        int cnt=0;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(board[i][j]){
                    cnt++;
                    cabbage(i,j);
                }

        printf("%d\n",cnt);
    }

    return 0;
}
