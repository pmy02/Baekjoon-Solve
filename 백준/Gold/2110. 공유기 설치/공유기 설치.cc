#include <bits/stdc++.h>
using namespace std;

int n,c,i,low=1,high,mid,maxx;
int a[200000];

int main()
{
    cin>>n>>c;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    high=a[n-1]-a[0];
    while(low<=high){
        mid=(low+high)/2;
        int cnt=1;
        int prev=a[0];
        for(i=1;i<n;i++)
            if(a[i]-prev>=mid){
                cnt++;
                prev=a[i];
            }

        if(cnt>=c){
            maxx=max(maxx,mid);
            low=mid+1;
        }
        else high=mid-1;
    }

    printf("%d",maxx);
    return 0;
}
