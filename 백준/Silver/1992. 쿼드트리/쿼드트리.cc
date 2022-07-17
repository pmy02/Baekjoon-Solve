#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int a[100][100];


void f(int x,int y,int n)
{
    int cnt=0;
    for(int i=x;i<x+n;i++)
        for(int j=y;j<y+n;j++)
            if(a[i][j]) cnt++;

    if(cnt==0) printf("0");
    else if(cnt==n*n) printf("1");
    else{
        printf("(");
        f(x,y,n/2);
        f(x,y+n/2,n/2);
        f(x+n/2,y,n/2);
        f(x+n/2,y+n/2,n/2);
        printf(")");
    }

}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%1d",&a[i][j]);
    
    f(0,0,n);
    return 0;
}
