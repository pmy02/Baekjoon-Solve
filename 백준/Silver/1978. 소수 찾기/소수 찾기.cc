#include <bits/stdc++.h>
using namespace std;

int i,j,n,a,cnt;
int d[1001];

int main()
{
    cin>>n;
    d[1]=1;
    for(i=2;i<=1000;i++){
        if(d[i]) continue;

        for(j=2;i*j<=1000;j++)
            d[i*j]=1;
    }

    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(!d[a]) cnt++;
    }
    printf("%d",cnt);

    return 0;
}
