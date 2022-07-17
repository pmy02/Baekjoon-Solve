#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,maxx;
int a[100];

int main()
{
    scanf("%d %d",&n,&m);
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            for(k=j+1;k<n;k++)
                if(a[i]+a[j]+a[k]<=m)
                    maxx=max(maxx,a[i]+a[j]+a[k]);

    printf("%d",maxx);
    return 0;
}
