#include <bits/stdc++.h>
using namespace std;

int n,check=1,cnt=-1;
int a[12];
int ch[11];

void f(int x,int num)
{
    if(check){
        if(x==num) cnt++;
        if(cnt==n){
            for(int i=0;i<x;i++)
                printf("%d",a[i]);
            check=0;
        }
        else
            for(int i=0;i<10;i++)
                if(!ch[i]){
                    if(x>0&&a[x-1]<=i) continue;
                    ch[i]=1;
                    a[x]=i;
                    f(x+1,num);
                    ch[i]=0;
                }
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<11;i++)
        if(check) f(0,i);

    if(check) printf("-1");
    return 0;
}
