#include<bits/stdc++.h>
using namespace std;

int n,m,p,q,i,cnt;
int a[101][101];
int v[101];

void f(int k)
{
    v[k]=1;
    for(int j=1;j<=n;j++)
        if(a[k][j]==1&&v[j]==0)
        {
            cnt++;
            f(j);
        }
}

int main()
{
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&p,&q);
        a[p][q]=1;
        a[q][p]=1;
    }
    f(1);

    cout<<cnt;
    return 0;
}
