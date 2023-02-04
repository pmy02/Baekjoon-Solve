#include <bits/stdc++.h>
using namespace std;

int n,a,b,i;

int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a/b+(a%b!=0?1:0));
    }

    return 0;
}
