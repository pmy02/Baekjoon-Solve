#include <bits/stdc++.h>
using namespace std;

int i,j,t,k,n;
int d[15][15];

int main()
{
    cin>>t;
    for(i=1;i<15;i++)
        d[0][i]=i;
    for(i=1;i<15;i++)
        for(j=1;j<15;j++)
            for(k=1;k<=j;k++)
                d[i][j]+=d[i-1][k];

    for(i=0;i<t;i++){
        scanf("%d %d",&k,&n);
        printf("%d\n",d[k][n]);
    }

    return 0;
}
