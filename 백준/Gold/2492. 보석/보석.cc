#include <bits/stdc++.h>
using namespace std;


struct Data
{
    int x;
    int y;
}v[101];
int n,m,t,k,x,y,i,j,maxx;


void f(int xx,int yy)
{
    int cnt=0;
    for(int i=0;i<t;i++)
		if(xx<=v[i].x && v[i].x<=xx+k && yy<=v[i].y && v[i].y<=yy+k) cnt++;

    if(cnt>maxx){
        maxx=cnt;
        x=xx,y=yy+k;
    }
}


int main()
{
    cin>>n>>m>>t>>k;
    
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        v[i].x=x;
        v[i].y=y;
    }

    for(i=0;i<t;i++)
        for(j=0;j<t;j++){
            int xx,yy;
            
            if(v[i].x+k>n) xx=n-k;
            else xx=v[i].x;
            if(v[j].y+k>m) yy=m-k;
            else yy=v[j].y;

            f(xx,yy);
        }

    printf("%d %d\n",x,y);
    printf("%d",maxx);
    return 0;
}
