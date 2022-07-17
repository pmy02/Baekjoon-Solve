#include <bits/stdc++.h>
using namespace std;

int n,m,cnt;
int a[100][100];
int x[100];
int y[100];

bool check(int x,int y,int key)
{
    /// 가로, 세로 중복확인
    for(int i=0;i<9;i++){
        if(i!=y&&a[x][i]==key) return 0;
        if(i!=x&&a[i][y]==key) return 0;
    }

    /// 3*3 내부에서 중복확인
    for(int i=x-(x%3);i<(x+3)-(x%3);i++)
        for(int j=y-(y%3);j<(y+3)-(y%3);j++){
            if(i==x&&j==y) continue;
            if(a[i][j]==key) return 0;
        }
    return 1;/// 다 통과하면 1 리턴
}

void f(int p)
{
    if(p>=cnt){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
        exit(0);
    }
    for(int k=1;k<=9;k++){
            a[x[p]][y[p]]=k;
            if(check(x[p],y[p],k)) f(p+1);
            a[x[p]][y[p]]=0;
        }
}

int main()
{
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++){
            scanf("%d",&a[i][j]);
            if(!a[i][j]){
                x[cnt]=i;
                y[cnt]=j;
                cnt++;
            }
        }

    f(0);
    return 0;
}
