#include <bits/stdc++.h>
using namespace std;

long long n,k,low=1,high,result;

int main()
{
    cin>>n>>k;
    high=n*n;

    while(low<=high){
        long long mid=(low+high)/2;
        long long cnt=0;

        for(int i=1;i<=n;i++)
            cnt+=min(n,mid/i);

        if(cnt>=k){
            result=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

    printf("%lld",result);
    return 0;
}
