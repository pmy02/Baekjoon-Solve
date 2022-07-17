#include<bits/stdc++.h>
using namespace std;

int n,a,i,v,maxx=-987654321;

int main()
{
    for(i=1;i<=9;i++)
    {
        scanf("%d",&a);
        if(a>maxx) maxx=a,v=i;
    }
    printf("%d\n%d",maxx,v);

    return 0;
}
