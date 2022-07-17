#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int start;
    int finish;
}z[100000];
int n,k,i,last=-1,cnt;

bool f(Data &p,Data &q)
{
    if(p.finish==q.finish) return p.start<q.start;
    return p.finish<q.finish;
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%d %d",&z[i].start,&z[i].finish);

    sort(z,z+n,f);
    for(i=0;i<n;i++)
        if(last<=z[i].start){
            last=z[i].finish;
            cnt++;
        }
    
    printf("%d",cnt);
    return 0;
}
