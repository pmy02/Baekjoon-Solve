#include <bits/stdc++.h>
using namespace std;

int n,i,j,cnt0,cnt1;
int a[129][129];

void f(int x,int y,int m)
{
    int cnt=0;
    for(int i=x;i<x+m;i++)
        for(int j=y;j<y+m;j++)
            if(a[i][j]) cnt++;

    if(cnt==m*m) cnt1++;
    else if(cnt==0) cnt0++;
    else{
        f(x,y,m/2);
        f(x,y+m/2,m/2);
        f(x+m/2,y,m/2);
        f(x+m/2,y+m/2,m/2);
    }
}


int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    f(1,1,n);

    printf("%d\n%d",cnt0,cnt1);
    return 0;
}
