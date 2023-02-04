#include <bits/stdc++.h>
using namespace std;

int i,n,x,y,ball=1;

int main()
{
    cin>>n;
    
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x==ball) ball=y;
        else if(y==ball) ball=x;
    }

    printf("%d",ball);
    return 0;
}
