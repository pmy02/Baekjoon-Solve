#include <bits/stdc++.h>
using namespace std;


struct Data
{
    int a;
    int b;
    int val;
};
int V,E,a,b,val,ans,check,last,i;
int parent[100001];
vector<Data> v;


bool cmp(Data &p,Data &q)
{
    return p.val<q.val;
}


///재귀로 최종부모 찾는 작업
int Find(int x)
{
    if(parent[x]==x) return x;
    return parent[x]=Find(parent[x]);
}


///재귀 호출하여 부모를 합치는 작업
void Union(int p,int q)
{
    check=0;
    p=Find(p);
    q=Find(q);

    if(p==q) return;

    parent[p]=q;
    check=1;
}


int main()
{
    cin>>V>>E;
    for(i=1;i<=V;i++)
        parent[i]=i;///초기화

    for(i=0;i<E;i++){
        scanf("%d %d %d",&a,&b,&val);
        v.push_back({a,b,val});
    }

    sort(v.begin(),v.end(),cmp);

    for(i=0;i<E;i++){
        Union(v[i].a,v[i].b);

        if(check){
            ans+=v[i].val;
            last=v[i].val;
        }
    }

    cout<<ans-last;
    return 0;
}
