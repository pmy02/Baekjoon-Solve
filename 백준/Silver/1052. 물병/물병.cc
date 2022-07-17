#include <bits/stdc++.h>
using namespace std;

int i,n,m,k,cnt,ans;

int main()
{
    cin>>n>>k;
    if(n<=k){
        printf("0");
        return 0;
    }
    while(1){
        m=n,cnt=0;
        ///합칠 수 없는 물병 개수 구하기
        while(m){
            if(m%2==1) cnt++;
            m/=2;
        }
     
        if(cnt<=k){
            printf("%d",ans);
            return 0;
        }
        ans++,n++;
    }
}
