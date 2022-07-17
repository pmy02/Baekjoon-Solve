#include <bits/stdc++.h>
using namespace std;

int i,j,k,p,n,m,cntw,cntb,minn=987654321;
char a[51][51];

int main()
{
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("\n%c",&a[i][j]);

    for(i=7;i<n;i++)
        for(j=7;j<m;j++){
            for(k=i-7;k<i+1;k++)
                for(p=j-7;p<j+1;p++)
                    if((k+p)%2==0){
                        if(a[k][p]=='W') cntw++;
                    }
                    else
                        if(a[k][p]=='B') cntw++;
            for(k=i-7;k<i+1;k++)
                for(p=j-7;p<j+1;p++)
                    if((k+p)%2==0){
                        if(a[k][p]=='B') cntb++;
                    }
                    else
                        if(a[k][p]=='W') cntb++;

            minn=min(minn,min(cntw,cntb));
            cntw=0,cntb=0;
        }

    printf("%d",minn);
    return 0;
}