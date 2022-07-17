#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,maxx=-987654321,p;
int a[1002][1002];
int d[1002][1002];
int r[1002];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=5;j++)
            scanf("%d",&a[i][j]);

    for(i=1;i<=5;i++)
        for(j=1;j<n;j++)
            for(k=j+1;k<=n;k++)
                if(d[j][k]==0&&a[j][i]==a[k][i])
                {
                    r[j]++,r[k]++;
                    d[j][k]=1,d[k][j]=1;
                }

    for(i=1;i<=n;i++)
        if(r[i]>maxx) maxx=r[i],p=i;
    printf("%d",p);
    return 0;
}
