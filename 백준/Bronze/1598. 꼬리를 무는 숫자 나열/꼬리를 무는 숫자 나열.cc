#include <bits/stdc++.h>
using namespace std;

int n,m,cnt;

int main()
{
    cin>>n>>m;

    if(n%4==0&&m%4!=0) cnt++;
    else if(n%4!=0&&m%4==0) cnt--;
    cnt+=n/4>=m/4?n/4-m/4:m/4-n/4;

    if(n%4==0&&m%4!=0) cnt+=4-m%4;
    else if(n%4!=0&&m%4==0) cnt+=4-n%4 ;
    else cnt+=n%4>=m%4?n%4-m%4:m%4-n%4;

    printf("%d",cnt);
    return 0;
}
