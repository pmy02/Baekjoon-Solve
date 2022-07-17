#include <bits/stdc++.h>
using namespace std;

int n,a,i,sum,f,b;
priority_queue<int,vector<int>,greater<int> > q;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        q.push(a);
    }
    while(q.size()!=1)
    {
        f=q.top();
        q.pop();
        b=q.top();
        q.pop();
        q.push(f+b);
        sum+=f+b;
    }
    printf("%d",sum);
    return 0;
}
