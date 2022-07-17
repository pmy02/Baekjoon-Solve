#include <bits/stdc++.h>
using namespace std;

int a,b,v,n,cnt=1;

int main()
{
    cin>>a>>b>>v;
    if(a>=v) printf("1");
    else{
        n=a-b;
        v-=a;
        if(n>=v) printf("2");
        else if(v%n) printf("%d",v/n+2);
        else printf("%d",v/n+1);
    }

    return 0;
}
