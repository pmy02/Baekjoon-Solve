#include <bits/stdc++.h>
using namespace std;

int i,n,m,cnt;

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++){
        if(n%i==0) cnt++;
        if(cnt==m){
            printf("%d",i);
            return 0;
        }
    }

    printf("0");
    return 0;
}
