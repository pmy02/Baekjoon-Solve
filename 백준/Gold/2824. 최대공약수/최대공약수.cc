#include <bits/stdc++.h>
using namespace std;

#define D 1000000000
int n,m,i,j,num,check;
long long sum=1,g;
int x[1001];
int y[1001];

long long f(long long a,long long b)
{
    if(a%b==0) return b;
    else return f(b,a%b);
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&num);
        x[i]=num;
    }

    cin>>m;
    for(i=0;i<m;i++){
        scanf("%d",&num);
        y[i]=num;
    }

    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            g=f(x[i],y[j]);
            x[i]/=g;
            y[j]/=g;
            sum*=g;
            if(sum>=D){
                sum%=D;
                check=1;
            }
        }
    
    if(check) printf("%09lld",sum);
    else printf("%lld",sum);

    return 0;
}
