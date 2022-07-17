#include<bits/stdc++.h>
using namespace std;

int l,p,a,n,i;

int main()
{
    scanf("%d %d",&l,&p);
    n=l*p;
    for(i=0;i<5;i++){
        scanf("%d",&a);
        printf("%d ",a-n);
    }

    return 0;
}
