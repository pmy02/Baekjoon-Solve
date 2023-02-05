#include <bits/stdc++.h>
using namespace std;

int cnt;
double a,b,c,d,maxx=-1;

int main()
{
    cin>>a>>b>>c>>d;
    if(a/c+b/d>maxx) maxx=a/c+b/d;
    if(c/d+a/b>maxx) maxx=c/d+a/b,cnt=1;
    if(d/b+c/a>maxx) maxx=d/b+c/a,cnt=2;
    if(b/a+d/c>maxx) maxx=b/a+d/c,cnt=3;

    cout<<cnt;
    return 0;

}
