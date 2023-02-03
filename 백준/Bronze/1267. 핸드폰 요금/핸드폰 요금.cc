#include <bits/stdc++.h>
using namespace std;

int i,n,m,cnt_30,cnt_60;

int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("%d",&m);

        cnt_30+=(m/30+1)*10;
        cnt_60+=(m/60+1)*15;
    }

    if(cnt_30<cnt_60) printf("Y %d",cnt_30);
    else if(cnt_30>cnt_60) printf("M %d",cnt_60);
    else printf("Y M %d",cnt_30);
    
    return 0;
}
