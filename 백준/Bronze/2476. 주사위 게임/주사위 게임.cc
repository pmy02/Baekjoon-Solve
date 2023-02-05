#include <bits/stdc++.h>
using namespace std;

int i,n,a,b,c,sum,maxx;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a==b&&b==c) sum=10000+a*1000;
        else if(a!=b&&b!=c&&a!=c) sum=max({a,b,c})*100;
        else if(a==b||b==c) sum=1000+b*100;
        else sum=1000+a*100;

        maxx=max(maxx,sum);
    }

    printf("%d",maxx);
    return 0;
}
