#include <bits/stdc++.h>
using namespace std;

double d,h,w,l;

int main()
{
    scanf("%lf %lf %lf",&d,&h,&w);
    l=sqrt(h*h+w*w);
    d/=l;
    h*=d;
    w*=d;
    printf("%d %d",(int)h,(int)w);

    return 0;
}
