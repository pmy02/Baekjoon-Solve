#include <bits/stdc++.h>
using namespace std;

int i,n,m,a,b;

int main()
{
    cin>>n>>m;

    int maxx=m;
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        m+=a;
        m-=b;
        if(m<0){
            printf("0");
            return 0;
        }
        maxx=max(maxx,m);
    }
    
    printf("%d",maxx);
    return 0;
}
