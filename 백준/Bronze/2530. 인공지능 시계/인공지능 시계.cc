#include<bits/stdc++.h>
using namespace std;

int h,m,s,t,n;

int main()
{
    scanf("%d %d %d %d",&h,&m,&s,&t);

    s+=t;
    n=s/60;
    s%=60;

    m+=n;
    n=m/60;
    m%=60;

    h+=n;
    h%=24;

    printf("%d %d %d",h,m,s);

    return 0;
}
