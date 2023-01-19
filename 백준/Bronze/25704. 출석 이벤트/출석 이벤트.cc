#include <bits/stdc++.h>
using namespace std;

int n,m,maxx=0;

int main()
{
    cin>>n>>m;
    if(n>=5) maxx=max(maxx,500);
    if(n>=10) maxx=max(maxx,m/10);
    if(n>=15) maxx=max(maxx,2000);
    if(n>=20) maxx=max(maxx,m/4);

    if(maxx>=m) printf("0");
    else printf("%d",m-maxx);
    return 0;
}
