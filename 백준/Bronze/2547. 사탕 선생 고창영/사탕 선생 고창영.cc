#include <bits/stdc++.h>
using namespace std;

int i,j,n,m;
long long val,sum;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&m);

        sum=0;
        for(j=0;j<m;j++){
            scanf("%lld",&val);
            sum=(sum+val)%m;
        }

        if(sum%m==0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
