#include <bits/stdc++.h>
using namespace std;

int n,m,i,cnt;

int main()
{
    cin>>n;

    for(i=1;i<=n;i++){
        m=i;
        while(m){
            if(m%10==3||m%10==6||m%10==9) cnt++;
            m/=10;
        }
    }

    printf("%d",cnt);
    return 0;
}
