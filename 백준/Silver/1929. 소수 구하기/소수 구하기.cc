#include <bits/stdc++.h>
using namespace std;

int i,j,n,m;
int d[1000001];

int main()
{
    cin>>m>>n;
    d[1]=1;
    for(i=2;i<=1000000;i++){
        if(d[i]) continue;
        for(j=2;i*j<=1000000;j++)
            d[i*j]=1;
    }

    for(i=m;i<=n;i++)
        if(!d[i]) printf("%d\n",i);

    return 0;
}
