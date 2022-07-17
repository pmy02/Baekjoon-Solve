#include <bits/stdc++.h>
using namespace std;

int n,m,i,maxx,minn=1000001;
long long r;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&m);
        maxx=max(maxx,m);
        minn=min(minn,m);
    }

    r=maxx*minn;

    printf("%lld",r);
    return 0;
}
