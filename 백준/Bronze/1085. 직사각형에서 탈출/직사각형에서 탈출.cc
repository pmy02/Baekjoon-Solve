#include <bits/stdc++.h>
using namespace std;

int x,y,w,h,minn=1001;

int main()
{
    scanf("%d %d %d %d",&x,&y,&w,&h);
    
    minn=min(minn,(w-x));
    minn=min(minn,(h-y));
    minn=min(minn,x);
    minn=min(minn,y);
    
    printf("%d",minn);

    return 0;
}
