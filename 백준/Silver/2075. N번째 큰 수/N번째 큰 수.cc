#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> > pq;
int n,a,i;

int main()
{
    cin>>n;
    for(i=0;i<n*n;i++)
    {
        scanf("%d",&a);
        if(pq.size()<n) pq.push(a);
        else if(a>pq.top())
        {
            pq.pop();
            pq.push(a);
        }
    }
    printf("%d",pq.top());

    return 0;
}
