#include <bits/stdc++.h>
using namespace std;
 
int n,i,p,q,x,y;
long long d[100002],minn=9876543210,z,zz;
 
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%lld",&d[i]);
 
    sort(d,d+n);
    p=0,q=n-1;
    while(p<q)
    {
        z=d[p]+d[q];
        zz=z;
        if(minn>abs(zz))
        {
            minn=abs(zz);
            x=p,y=q;
        }
        if(minn==0) break;
        else if(z>0) q--;
        else p++;
    }
    printf("%lld %lld",d[x],d[y]);
    return 0;
}