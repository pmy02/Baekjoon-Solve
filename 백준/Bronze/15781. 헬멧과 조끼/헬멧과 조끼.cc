#include <bits/stdc++.h>
using namespace std;

int i,n,m,val,max_halmet,max_vest;

int main()
{
    cin>>n>>m;
    
    for(i=0;i<n;i++){
        scanf("%d",&val);
        max_halmet=max(max_halmet,val);
    }

    for(i=0;i<m;i++){
        scanf("%d",&val);
        max_vest=max(max_vest,val);
    }

    printf("%d",max_halmet+max_vest);
    return 0;
}
