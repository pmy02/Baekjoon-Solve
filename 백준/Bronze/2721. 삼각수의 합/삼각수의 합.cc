#include <bits/stdc++.h>
using namespace std;

int i,j,n,m;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&m);

        long long sum=0;
        for(j=1;j<=m;j++) sum+=j*(j+1)*(j+2)/2;

        printf("%lld\n",sum);
    }

    return 0;
}
