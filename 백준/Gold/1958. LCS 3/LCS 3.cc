#include <bits/stdc++.h>
using namespace std;

int i,j,k;
int dp[101][101][101];
string a,b,c;

int main()
{
    cin>>a>>b>>c;
    for(i=1;i<=a.size();i++)
        for(j=1;j<=b.size();j++)
            for(k=1;k<=c.size();k++){
                if(a[i-1]==b[j-1]&&b[j-1]==c[k-1]) dp[i][j][k]=dp[i-1][j-1][k-1]+1; /// 같으면 - LIS 증가
                else dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1])); /// 다르면 - 이전 LCS에서 a와 b와 c를 넣었을 경우 중 큰 값으로
            }

    printf("%d",dp[a.size()][b.size()][c.size()]);
    return 0;
}
