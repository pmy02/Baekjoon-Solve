#include <bits/stdc++.h>
using namespace std;

int i,j,cnt;
int board[20][20];
vector <pair<int,int> > cnt1;
vector <pair<int,int> > cnt2;
int dx[4]={0,1,1,-1};
int dy[4]={1,0,1,1};


int main()
{
    for(i=1;i<=19;i++)
        for(j=1;j<=19;j++){
            scanf("%d",&board[i][j]);

            if(board[i][j]==1) cnt1.push_back({i,j});
            else if(board[i][j]==2) cnt2.push_back({i,j});
        }

    for(i=0;i<cnt1.size();i++){
        for(j=0;j<4;j++){
            cnt=1;
            int x=cnt1[i].first;
            int y=cnt1[i].second;
            int xx=x+dx[j];
            int yy=y+dy[j];

            while(board[x][y]==board[xx][yy]){
                xx+=dx[j];
                yy+=dy[j];
                cnt++;
            }

            if(cnt==5&&board[x][y]!=board[x-dx[j]][y-dy[j]]){
                printf("1\n");
                printf("%d %d",x,y);
                return 0;
            }
        }
    }

    for(i=0;i<cnt2.size();i++){
        for(j=0;j<4;j++){
            cnt=1;
            int x=cnt2[i].first;
            int y=cnt2[i].second;
            int xx=x+dx[j];
            int yy=y+dy[j];

            while(board[x][y]==board[xx][yy]){
                xx+=dx[j];
                yy+=dy[j];
                cnt++;
            }

            if(cnt==5&&board[x][y]!=board[x-dx[j]][y-dy[j]]){
                printf("2\n");
                printf("%d %d",x,y);
                return 0;
            }
        }
    }

    printf("0");
    return 0;
}
