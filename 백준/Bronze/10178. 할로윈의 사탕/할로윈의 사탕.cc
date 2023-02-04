#include <bits/stdc++.h>
using namespace std;

int i,n,a,b;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
    }

    return 0;
}
