#include <bits/stdc++.h>
using namespace std;

int t,y,m,d;

int main()
{
    cin>>t;

    while(t--){
        scanf("%d %d",&y,&m);
        m--;
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) d=31;
        else if(m==4||m==6||m==9||m==11) d=30;
        else if(m==0) d=31,m=12,y--;
        else if((m==2&&y%4==0&&y%100!=0)||(m==2&&y%400==0)) d=29;
        else d=28;
        
        printf("%d %d %d\n",y,m,d);
    }
    return 0;
}
