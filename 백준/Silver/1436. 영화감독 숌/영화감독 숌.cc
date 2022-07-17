#include <bits/stdc++.h>
using namespace std;

int n,m=666,mm,cnt;

int main()
{
    scanf("%d",&n);
    while(n){
        mm=m;
        while(mm)
            if(mm%10==6){
                cnt++;
                mm/=10;
            }
            else if(cnt<3){
                cnt=0;
                mm/=10;
            }
            else if(m>=3){
                mm/=10;
            }
        if(cnt>=3) n--;
        cnt=0,m++;
    }

    printf("%d",m-1);
    return 0;
}
