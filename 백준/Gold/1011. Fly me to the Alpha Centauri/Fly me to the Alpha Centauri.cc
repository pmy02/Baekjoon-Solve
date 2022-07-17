#include <bits/stdc++.h>
using namespace std;

long long a,b,sum,key;
int n,i,j,k,cnt;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        key=b-a,sum=0,cnt=0;

        for(j=1;;j++){
            for(k=0;k<2;k++){
                sum+=j,cnt++;
                if(key<=sum) break;
            }
            if(key<=sum){
                printf("%d\n",cnt);
                break;
            }
        }
    }

    return 0;
}
