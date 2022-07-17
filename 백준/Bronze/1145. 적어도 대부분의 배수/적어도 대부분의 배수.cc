#include <bits/stdc++.h>
using namespace std;

int i,sum=1,cnt;
int a[5];

int main()
{
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    while(1){
        cnt=0;
        for(i=0;i<5;i++){
            if(sum%a[i]==0) cnt++;
            if(cnt>2){
                printf("%d",sum);
                return 0;
            }
        }
        sum++;
    }
}
