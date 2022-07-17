#include<bits/stdc++.h>
using namespace std;

int n,k,l,cnt;
int v[2000001];
queue <pair<int,int> > q;

int main()
{
    cin>>n>>k;
    q.push({n,0});
    
    while(!q.empty()){
        l=q.front().first;
        cnt=q.front().second;
        v[l]=1;
        q.pop();

        if(l==k) break;

        if(l-1>=0&&v[l-1]==0) q.push({l-1,cnt+1});
        if(v[l+1]==0) q.push({l+1,cnt+1});
        if(l*2>=0&&l*2<=k*2&&v[l*2]==0) q.push({l*2,cnt+1});
    }

    printf("%d",cnt);
    return 0;
}
