#include <bits/stdc++.h>
using namespace std;

long long n,c,ans;
long long weight[31];
vector<long long> v1;
vector<long long> v2;


void dfs(int start,int endd,vector<long long> &v,long long sum)
{
    if(start>endd){
        v.push_back(sum);
        return ;
    }

    dfs(start+1,endd,v,sum);
    dfs(start+1,endd,v,sum+weight[start]);
}

int main()
{
    cin>>n>>c;
    
    for(int i=0;i<n;i++)
        scanf("%lld",&weight[i]);

    dfs(0,n/2,v1,0);
    dfs(n/2+1,n-1,v2,0);

    sort(v2.begin(),v2.end());

    for(int i=0;i<v1.size();i++)
        ans+=upper_bound(v2.begin(),v2.end(),c-v1[i])-v2.begin();

	cout<<ans;
    return 0;
}
