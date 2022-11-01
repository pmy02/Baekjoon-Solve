#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,x,y,x2,y2;
int board[1025][1025];


int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&board[i][j]);
    
    /// 행 전처리
    for(i=1;i<=n;i++)
        for(j=2;j<=n;j++)
            board[i][j]+=board[i][j-1];
    
    /// 열 전처리
    for(i=1;i<=n;i++)
        for(j=2;j<=n;j++)
            board[j][i]+=board[j-1][i];

    for(i=0;i<m;i++){
        scanf("%d %d %d %d",&x,&y,&x2,&y2);

        int sum=board[x2][y2]-board[x-1][y2]-board[x2][y-1]+board[x-1][y-1];
        printf("%d\n",sum);
    }

    return 0;
}
