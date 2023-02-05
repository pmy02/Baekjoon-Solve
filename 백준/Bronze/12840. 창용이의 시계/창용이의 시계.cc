#include <bits/stdc++.h>
using namespace std;

int i,h,m,s,n,t,c,sum;

int main()
{
    cin>>h>>m>>s>>n;
    sum=h*3600+m*60+s;

    for(i=0;i<n;i++){
        scanf("%d",&t);

        if(t==3) printf("%d %d %d\n",sum/3600,(sum%3600)/60,sum%60);
        else if(t==2){
            scanf("%d",&c);
            sum=(sum-c)%86400;
            if(sum<0) sum+=86400;
        }
        else{
            scanf("%d",&c);
            sum=(sum+c)%86400;
        }
    }

    return 0;
}
