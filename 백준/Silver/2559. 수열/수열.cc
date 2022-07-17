#include <bits/stdc++.h>
using namespace std;

int n,s,k,i,sum,maxx;
int a[100000];

int main()
{
    cin>>n>>k;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<k;i++)
        sum+=a[i];

    maxx=sum;
    while(k<n){
        sum+=a[k];
        sum-=a[s];
        maxx=max(maxx,sum);
        s++,k++;
    }
    
    printf("%d",maxx);
    return 0;
}
