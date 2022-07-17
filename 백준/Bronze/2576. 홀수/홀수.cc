#include<bits/stdc++.h>
using namespace std;

int i,n,sum,minn=1000;

int main()
{
    for(i=0;i<7;i++){
        scanf("%d",&n);
        if(n%2){
            sum+=n;
            minn=min(minn,n);
        }
    }

    if(minn==1000) printf("-1");
    else printf("%d\n%d",sum,minn);

    return 0;
}
