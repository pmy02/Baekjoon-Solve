#include <bits/stdc++.h>
using namespace std;

int n,m,a,b,c,d;

int main()
{
    cin>>n>>m;

    a=100-n;
    b=100-m;
    c=100-(a+b);
    d=a*b;

    printf("%d %d %d %d %d %d\n",a,b,c,d,d/100,d%100);
    printf("%d %d",(d+c*100)/100,d%100);
    
    return 0;
}
