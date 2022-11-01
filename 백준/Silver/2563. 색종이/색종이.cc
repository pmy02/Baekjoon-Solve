#include <bits/stdc++.h>
using namespace std;

int n,x,y,i,j,cnt;
int board[101][101];

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        for(int p=x;p<x+10;p++)
            for(int q=y;q<y+10;q++)
                board[p][q]++;
    }

    for(i=0;i<101;i++){
        for(j=0;j<101;j++)
            if(board[i][j]>1) cnt+=board[i][j]-1;
    }

    printf("%d",n*100-cnt);
    return 0;
}
