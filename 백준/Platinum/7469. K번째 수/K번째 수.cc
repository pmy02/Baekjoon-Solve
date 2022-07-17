#include<bits/stdc++.h>
using namespace std;

int n,m,p,q,a,cnt,i,j,k;
vector<pair<int,int> > v;

int main()
{
    cin>>n>>m;
    for(p=1;p<=n;p++)
    {
        scanf("%d",&a);
        v.push_back({a,p});
    }

    sort(v.begin(),v.end());
    for(p=1;p<=m;p++)
    {
        q=0,cnt=0;
        scanf("%d %d %d",&i,&j,&k);
        while(cnt<k)
        {
            if(v[q].second>=i&&v[q].second<=j) cnt++;
            q++;
        }
        printf("%d\n",v[q-1].first);
    }
    return 0;
}
