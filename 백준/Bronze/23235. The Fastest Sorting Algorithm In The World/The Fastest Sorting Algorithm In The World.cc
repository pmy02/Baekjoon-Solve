#include <bits/stdc++.h>
using namespace std;

int i,j,n,m;

int main()
{
    for(i=1;;i++){
        scanf("%d",&n);
        if(!n) break;

        for(j=0;j<n;j++)
            scanf("%d",&m);
        printf("Case %d: Sorting... done!\n",i);
    }
    return 0;
}
