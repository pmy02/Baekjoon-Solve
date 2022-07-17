#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j,mo,ja,p;
long long int sum;

int main()
{
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        sum=1,mo=m,ja=n,p=1;
        for(j=0;j<n;j++){
            sum*=mo;
            if(sum%ja==0){
                sum/=ja;
                ja--;
            }
            mo--;
        }
        while(ja){
            p*=ja;
            ja--;
        }
        printf("%lld\n",sum/p);
    }

    return 0;
}
