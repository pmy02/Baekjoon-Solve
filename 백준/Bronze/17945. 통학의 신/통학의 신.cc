#include <bits/stdc++.h>
using namespace std;

int i,a,b,c,d,sum,num;

int main()
{
    scanf("%d %d",&a,&b);
    for(i=-3000;i<3000;i++)
        if(i*i+2*a*i+b==0) printf("%d ",i);

    return 0;
}
