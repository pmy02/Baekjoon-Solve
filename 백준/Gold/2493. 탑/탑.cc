#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int a[500002];
int d[500002];
stack<int> s;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=n;i>0;i--)
    {
        while(!s.empty()&&a[s.top()]<a[i])
        {
            d[s.top()]=i;
            s.pop();
        }
        if(a[i]>a[i-1])
            s.push(i);
        else d[i]=i-1;
    }

    for(i=1;i<=n;i++)
        printf("%d ",d[i]);
    return 0;
}
