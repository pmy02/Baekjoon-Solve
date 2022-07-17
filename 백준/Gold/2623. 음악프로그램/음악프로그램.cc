#include<bits/stdc++.h>
using namespace std;

int n,m,s,ss,w,i,j;
int a[1001][1001];
int check[1001];
queue<int> q;
vector<int> ans;

int main()
{
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&s,&ss);
        for(j=1;j<s;j++)
        {
            scanf("%d",&w);
            if(a[ss][w]!=1) a[ss][w]=1, check[w]++;
            ss=w;
        }
    }

    for(i=1;i<=n;i++)
        if(check[i]==0) q.push(i);

    while(!q.empty())
    {
        s=q.front();
        q.pop();
        ans.push_back(s);
        for(j=1;j<=n;j++)
            if(a[s][j]==1)
                if(--check[j]==0) q.push(j);
    }

    if(ans.size()!=n) printf("0");
    else
        for(i=0;i<n;i++)
            printf("%d\n",ans[i]);
    return 0;
}
