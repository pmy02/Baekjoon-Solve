#include<bits/stdc++.h>
using namespace std;

queue <int> q;
int n,m,k,x,y,i,j;
int a[1001][1001];
int v[1001];

void BFS(int i)
{
    v[i]=1;
    q.push(i);

    while(!q.empty()){
        int x=q.front();
        q.pop();
        printf("%d ",x);
        
        for(int j=1;j<=n;j++)
            if(a[x][j]==1&&v[j]==0){
                q.push(j);
                v[j]=1;
            }
    }
}

void DFS(int i)
{
    printf("%d ",i);
    v[i]=1;
    for(int j=1;j<=n;j++)
        if(a[i][j]==1&&v[j]==0) DFS(j);
}

int main()
{
    cin>>n>>m>>k;
    for(i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        a[y][x]=1;
    }
    
    DFS(k);
    memset(v,0,sizeof(v));
    printf("\n");
    BFS(k);
    
    return 0;
}