#include <bits/stdc++.h>
using namespace std;


int n,m,num,s,e,i;
int parent[1000001];


///재귀로 최종부모 찾는 작업
int Find(int x)
{
    if(parent[x]==x) return x;
    return parent[x]=Find(parent[x]);
}


///재귀 호출하여 부모를 합치는 작업
void Union(int p,int q)
{
    p=Find(p);
    q=Find(q);
    if(p<q) parent[q]=p;
    else parent[p]=q;
}


int main()
{
    cin>>n>>m;
    for(i=0;i<=n;i++)
        parent[i]=i;///초기화

    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&num,&s,&e);
        if(!num) Union(s,e);
        else{
            if(Find(s)==Find(e)) printf("YES\n");
            else printf("NO\n");
        }
    }

    return 0;
}
