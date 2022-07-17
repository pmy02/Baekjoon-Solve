#include <bits/stdc++.h>
using namespace std;

int n,i;
int d[1000001];

int main()
{
    cin >> n;
    d[1]=0;
    d[2]=1;
    d[3]=1;
    for(i=4;i<=n;i++){
        d[i]=d[i-1]+1;
        if(i%3==0) d[i]=min(d[i],d[i/3]+1);
        if(i%2==0) d[i]=min(d[i],d[i/2]+1);
    }
    
    printf("%d",d[n]);
    return 0;
}
