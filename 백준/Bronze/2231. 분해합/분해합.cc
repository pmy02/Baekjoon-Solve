#include <bits/stdc++.h>
using namespace std;

int n,ch=1,m=1,mm,sum;

int main()
{
    scanf("%d",&n);
    while(ch){
        mm=m;
        while(mm){
            sum+=mm%10;
            mm/=10;
        }
        if(m+sum==n) ch=0;
        if(m>=n){
            printf("0");
            return 0;
        }
        m++,sum=0;
    }

    printf("%d",m-1);
    return 0;
}
