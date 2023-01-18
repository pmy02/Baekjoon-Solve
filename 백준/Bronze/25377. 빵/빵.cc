#include <bits/stdc++.h>
using namespace std;

int n,a,b,minn=1001;

int main()
{
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a<=b) minn=min(minn,b);
    }

    printf("%d",minn);
    return 0;
}
