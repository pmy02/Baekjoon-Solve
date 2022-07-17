#include<bits/stdc++.h>
using namespace std;

queue <pair<int,int> > q;
vector <int> v;
int n,i,j;
int board[26][26];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};

void house(int a,int b)
{
    int cnt=1;
    board[a][b]=0;
    q.push({a,b});

    while(!q.empty()){
        a=q.front().first;
        b=q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int xx=a+x[i];
            int yy=b+y[i];
            if(xx<0||xx>=n||yy<0||yy>=n) continue;

            if(board[xx][yy]){
                board[xx][yy]=0;
                q.push({xx,yy});
                cnt++;
            }
        }
    }
    v.push_back(cnt);
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%1d",&board[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(board[i][j]) house(i,j);

    sort(v.begin(),v.end());

    printf("%d\n",v.size());
    for(i=0;i<v.size();i++)
        printf("%d\n",v[i]);

    return 0;
}
