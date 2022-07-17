#include <bits/stdc++.h>
using namespace std;

int t,x,y,r,xx,yy,rr,i,j;
double d,s;


int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        scanf("%d %d %d %d %d %d",&x,&y,&r,&xx,&yy,&rr);

        d=sqrt((xx-x)*(xx-x)+(yy-y)*(yy-y));
        s=(r>rr)?(r-rr):(rr-r);

        if(!d&&r==rr) printf("-1\n"); ///일치
        else if(d<r+rr&&d>s) printf("2\n"); ///교점 2개
        else if(d==r+rr||d==s) printf("1\n"); ///교점 1개(내접, 외접)
        else printf("0\n"); ///교점 X
    }

    return 0;
}
