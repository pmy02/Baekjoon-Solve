#include <bits/stdc++.h>
using namespace std;

int n;
int a[2200][2200];
int ans[3];

void f(int x,int y,int n)
{
    for(int i=x;i<x+n;i++)
        for(int j=y;j<y+n;j++)
            if(a[i][j]!=a[x][y]){
                for(int p=0;p<3;p++)
                    for(int q=0;q<3;q++)
                        f(x+n/3*p,y+n/3*q,n/3);
                return ;
            }

    ans[a[x][y]+1]++;
    return ;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    f(0,0,n);
    
    for(int i=0;i<3;i++)
        printf("%d\n",ans[i]);
    return 0;
}
