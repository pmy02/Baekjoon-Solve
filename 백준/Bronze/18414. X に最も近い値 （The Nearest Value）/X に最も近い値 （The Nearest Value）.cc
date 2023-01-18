#include <bits/stdc++.h>
using namespace std;

int x,l,r,ll,rr;
string s;

int main()
{
    cin>>x>>l>>r;

    if(x>=l&&x<=r) printf("%d",x);
    else{
        ll=x>l?x-l:l-x;
        rr=x>r?x-r:r-x;

        if(ll>rr) printf("%d",r);
        else printf("%d",l);
    }

    return 0;
}
