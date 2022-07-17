#include <bits/stdc++.h>
using namespace std;

int n,m,k,i,j,p;
int a[100][100];
int b[100][100];
int c[100][100];

int main()
{
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    scanf("%d %d",&m,&k);
    for(i=0;i<m;i++)
        for(j=0;j<k;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<k;j++)
            for(p=0;p<m;p++)
                c[i][j]+=a[i][p]*b[p][j];

    for(i=0;i<n;i++){
        for(j=0;j<k;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
