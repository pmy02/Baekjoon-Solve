#include <bits/stdc++.h>
using namespace std;

int s,n,k,r1,r2,c1,c2,i,j,key;

void f(int x,int y,int m)
{
    if(x/m%n>=key&&x/m%n<=k+(key-1)&&y/m%n>=key&&y/m%n<=k+(key-1)) printf("1");
    else if(m/n==0) printf("0");
    else f(x,y,m/n);
}


int main()
{
    scanf("%d %d %d %d %d %d %d",&s,&n,&k,&r1,&r2,&c1,&c2);

    key=(n-k)/2;
    for(i=r1;i<=r2;i++){
        for(j=c1;j<=c2;j++)
            f(i,j,pow(n,s));
        printf("\n");
    }

    return 0;
}
