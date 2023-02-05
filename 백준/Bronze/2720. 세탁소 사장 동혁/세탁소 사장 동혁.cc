#include <bits/stdc++.h>
using namespace std;

int i,n,m;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&m);
        printf("%d %d %d %d\n",m/25,(m%25)/10,((m%25)%10)/5,m%5);
    }

    return 0;
}
