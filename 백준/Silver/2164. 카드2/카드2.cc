#include <bits/stdc++.h>
using namespace std;

int n,m;
queue <int> q;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        q.push(i);
    
    while(q.size()>1){
        q.pop();
        m=q.front();
        q.pop();
        q.push(m);
    }


    printf("%d",q.front());
    return 0;
}
