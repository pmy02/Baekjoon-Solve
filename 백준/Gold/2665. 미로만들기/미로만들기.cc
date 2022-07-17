#include<bits/stdc++.h>
using namespace std;

int n,i,j,xx,yy;
int a[51][51];
int b[51][51];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
queue<pair<int,int> > q;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            scanf("%1d",&a[i][j]);
            a[i][j]=!a[i][j];
            b[i][j]=987654321;
        }
    b[1][1]=0;
    q.push({1,1});
    while(!q.empty())
    {
        for(int i=0; i<4; i++)
        {
            xx=q.front().first+dx[i];
            yy=q.front().second+dy[i];
            if(xx*yy==0||xx>n||yy>n)continue;
            if(b[yy][xx]>b[q.front().second][q.front().first]+a[yy][xx])
            {
                b[yy][xx]=b[q.front().second][q.front().first]+a[yy][xx];
                q.push({xx,yy});
            }
        }
        q.pop();
    }
    cout<<b[n][n];
    return 0;
}
