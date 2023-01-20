#include <bits/stdc++.h>
using namespace std;

int i,n,m,sum;

int main()
{
    cin>>n;
    for(i=0;i<3;i++){
        scanf("%d",&m);
        sum+=min(n,m);
    }

    printf("%d",sum);
    return 0;
}
