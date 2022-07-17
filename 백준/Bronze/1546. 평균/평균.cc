#include<bits/stdc++.h>
using namespace std;

int v[1001];
int n,i,maxx=-987654321;
double sum;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        if(maxx<v[i]) maxx=v[i];
    }
    for(i=0;i<n;i++)
        sum+=(double)v[i]/maxx*100;

    printf("%lf\n",sum/n);
    return 0;
}
