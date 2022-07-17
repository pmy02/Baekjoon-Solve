#include <bits/stdc++.h>
using namespace std;

int a,b,c;

int main()
{
    scanf("%d %d %d",&a,&b,&c);

    if(b>=c) printf("-1");
    else printf("%d",a/(c-b)+1);

    return 0;
}
