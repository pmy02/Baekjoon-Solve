#include<bits/stdc++.h>
using namespace std;


struct Data
{
    long long x;
    long long y;
}z[10000];
int n,i,point;
long long ans;


long long ccw(Data p, Data a,Data b)
{
    long long first=(a.x-p.x)*(b.y-p.y);
    long long second=(a.y-p.y)*(b.x-p.x);
    long long result=first-second;

    return result;
}


int main()
{
    cin>>n;

    for(i=0;i<n;i++)
        scanf("%lld %lld",&z[i].x,&z[i].y);

    Data point=z[0];
    for(i=1;i<n-1;i++)
        ans+=ccw(point,z[i],z[i+1]);

    if(ans<0) ans*=-1;

    printf("%lld.",ans/2);
    if(ans%2==0) printf("0");
    else printf("5");

    return 0;
}
