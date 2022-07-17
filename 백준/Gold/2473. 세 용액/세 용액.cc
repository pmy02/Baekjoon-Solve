#include <bits/stdc++.h>
using namespace std;

int n,i,j,p,q,x,y,z;
long long a[5002],ans[3],minn=9999999999,r,rr;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    p=0,q=n-1;
    for(i=0;i<n-2;i++)
    {
        p=i+1,q=n-1;
        while(minn&&p<q)
        {
            r=a[p]+a[q]+a[i];
            rr=r;
            if(minn>abs(rr))
            {
                minn=abs(rr);
                x=p,y=q;z=i;
            }
            if(r>0) q--;
            else p++;
        }
    }
    ans[0]=a[x],ans[1]=a[y],ans[2]=a[z];
    sort(ans,ans+3);
    for(i=0;i<3;i++)
        printf("%lld ",ans[i]);
    return 0;
}
