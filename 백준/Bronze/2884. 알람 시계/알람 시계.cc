#include<bits/stdc++.h>
using namespace std;

int h,m;

int main()
{
    cin>>h>>m;
    if(m-45<0&&h-1<0) printf("23 %d",m+15);
    else if(m-45<0) printf("%d %d",h-1,m+15);
    else printf("%d %d",h,m-45);
    return 0;
}
