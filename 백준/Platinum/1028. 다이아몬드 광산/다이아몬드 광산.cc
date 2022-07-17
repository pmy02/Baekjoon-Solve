#include <bits/stdc++.h>
using namespace std;

int r,c,i,j,k,maxx;
int d[751][751];
int dp[751][751][4];


int main()
{
    cin>>r>>c;
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            scanf("%1d",&d[i][j]);

    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            int ii=r-i+1;
            if(d[i][j]){
                dp[i][j][0]=dp[i-1][j-1][0]+1;
                dp[i][j][1]=dp[i-1][j+1][1]+1;
            }
            if(d[ii][j]){
                dp[ii][j][2]=dp[ii+1][j+1][2]+1;
                dp[ii][j][3]=dp[ii+1][j-1][3]+1;
            }
        }
    }

    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            for(k=1; k<=min(dp[i][j][2], dp[i][j][3]); k++){
                if((k-1)*2+i>r) break;
                if(dp[(k-1)*2+i][j][0]>=k && dp[(k-1)*2+i][j][1]>=k){
                    maxx=max(maxx, k);
                }
            }
        }
    }

    printf("%d", maxx);
    return 0;
}
