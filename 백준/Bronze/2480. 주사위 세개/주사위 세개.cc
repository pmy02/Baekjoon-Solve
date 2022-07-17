#include <bits/stdc++.h>
using namespace std;

int a,b,c;

int main()
{
    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&b==c) printf("%d",10000+a*1000);
    else if(a==b||b==c) printf("%d",1000+b*100);
    else if(a==c) printf("%d",1000+a*100);
    else printf("%d",max(a,max(b,c))*100);

    return 0;
}
