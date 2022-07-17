#include <bits/stdc++.h>
using namespace std;

int i,n,k,m,cnt;
int a[100000];
queue <int> q;

int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
        q.push(i);
    
    while(!q.empty()){
        for(i=1;i<k;i++){
            m=q.front();
            q.pop();
            q.push(m);
        }
        a[cnt++]=q.front();
        q.pop();
    }
    
    printf("<");
    for(i=0;i<cnt-1;i++)
        printf("%d, ",a[i]);
    printf("%d>",a[i]);
    return 0;
}