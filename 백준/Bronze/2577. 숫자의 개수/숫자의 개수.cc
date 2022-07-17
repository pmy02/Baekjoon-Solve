#include<bits/stdc++.h>
using namespace std;

int v[10];
int a,b,c,n,i;

int main()
{
    cin>>a>>b>>c;
    n=a*b*c;
    while(n!=0)
    {
        v[n%10]++;
        n/=10;
    }

    for(i=0;i<10;i++)
        printf("%d\n",v[i]);

    return 0;
}
