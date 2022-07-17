#include <bits/stdc++.h>
using namespace std;

int n,m,i;
long long low,high,mid,maxx;
int a[1000000];

int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(high<a[i]) high=a[i];
    }

    while(low<=high){
        long long cnt=0;
        mid=(low+high)/2;

        for(i=0;i<n;i++)
            if(a[i]>mid) cnt+=a[i]-mid;

        if(cnt>=m){
            maxx=mid;
            low=mid+1;
        }
        else high=mid-1;
    }

    printf("%lld",maxx);
    return 0;
}
