#include <bits/stdc++.h>
using namespace std;

int n,i,j;

void f(int x,int y,int m)
{
    if(x/m%3==1&&y/m%3==1) printf(" ");
    else if(m/3==0) printf("*");
    else f(x,y,m/3);
}


int main()
{
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            f(i,j,n);
        printf("\n");
    }
    
    return 0;
}
