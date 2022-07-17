#include <bits/stdc++.h>
using namespace std;

int n,k,i;
long long low=1,high,mid,maxx;
int a[10000];

int main()
{
    cin>>n>>k;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(high<a[i]) high=a[i];
    }

    sort(a,a+n);

    while(low<=high){
        int cnt=0;
        mid=(low+high)/2;

        for(i=0;i<n;i++)
            cnt+=a[i]/mid;

        if(cnt>=k){
            maxx=mid;
            low=mid+1;
        }
        else high=mid-1;
    }

    printf("%lld",maxx);
    return 0;
}
