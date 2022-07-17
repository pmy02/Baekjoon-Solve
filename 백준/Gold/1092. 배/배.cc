#include <bits/stdc++.h>
using namespace std;

int n,m,i,day,cnt_crane,cnt_box;
int crane[51];
int box[10001];
int check[10001];

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%d",&crane[i]);

    cin>>m;
    for(i=0;i<m;i++)
        scanf("%d",&box[i]);

    sort(crane,crane+n,greater<int>());
    sort(box,box+m,greater<int>());

    while(m>cnt_box){
        day++;
        for(i=0;i<m;i++){
            if(!check[i] && crane[cnt_crane]>=box[i]){
                check[i]=1;
                cnt_crane++,cnt_box++;
            }
            if(cnt_crane==n) break;
        }

        if(!cnt_crane){
            printf("-1");
            return 0;
        }
        cnt_crane=0;
    }

    printf("%d",day);
    return 0;
}
