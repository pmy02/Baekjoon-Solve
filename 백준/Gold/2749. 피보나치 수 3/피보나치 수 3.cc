#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
long long n,cnt=2;
vector <int> v;

void pisano(int x)
{
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    while(1){
        v.push_back((v[cnt]+v[cnt-1])%x);
        cnt++;

        if(v[cnt]==0&&v[cnt-1]==1) break;
    }

    return ;
}

int main()
{
    scanf("%lld",&n);
    pisano(1000000); /// 피사노 주기를 이용해서 나머지가 1000000일 때 주기를 구한다. 

    printf("%d",v[n%cnt]); /// 입력받은 값에 주기를 나눈 나머지가 답.
    return 0;
}
