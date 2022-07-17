#include<bits/stdc++.h>
using namespace std;

int a[500001];
int b[8001];
int c[4001];
int i,n,m,sum,maxx=-10000,minn=10000,cnt;
double avg;

int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]+4000]++;
        sum+=a[i];
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
        cnt=max(cnt,b[a[i]+4000]);
    }

    sort(a,a+n);

    avg=sum/(double)n;
    if(avg>-1&&avg<0) printf("0\n");
    else printf("%.0f\n",avg);

    printf("%d\n",a[n/2]);

    for(i=minn;i<=maxx;i++)
        if(b[i+4000]==cnt){
            c[m]=i;
            m++;
        }
    if(m>1){
        sort(c,c+m);
        printf("%d\n",c[1]);
    }
    else printf("%d\n",c[0]);

    printf("%d\n",maxx-minn);
}
