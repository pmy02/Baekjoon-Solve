#include <bits/stdc++.h>
using namespace std;

int a;

int main()
{
    scanf("%d",&a);
    if(a%2==0) printf("%d",(a/2+1)*(a/2+1));
    else printf("%d",(a/2+1)*(a/2+2));

    return 0;
}
