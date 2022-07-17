#include <bits/stdc++.h>
using namespace std;

int a,b,i,j,x,y,chx,chy;
char d[51][51];

int main()
{
    cin>>a>>b;
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            scanf("\n%c",&d[i][j]);

    for(i=0;i<a;i++){
        chx=0;
        for(j=0;j<b;j++)
            if(d[i][j]=='X'){
                chx=1;
                break;
            }
        if(!chx) x++;
    }

    for(i=0;i<b;i++){
        chy=0;
        for(j=0;j<a;j++)
            if(d[j][i]=='X'){
                chy=1;
                break;
            }
        if(!chy) y++;
    }

    printf("%d",max(x,y)-min(x,y)+min(x,y));
    return 0;
}
