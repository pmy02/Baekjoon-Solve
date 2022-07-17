#include<bits/stdc++.h>
using namespace std;

int n,i=1,cnt=1,sum=1;

int main()
{
    cin>>n;

    while(1){
        if(n<=sum) break;
        sum+=i*6;
        cnt++,i++;
    }

    printf("%d",cnt);
    return 0;
}
