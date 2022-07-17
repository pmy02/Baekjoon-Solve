#include<bits/stdc++.h>
using namespace std;

priority_queue<int> p1;
priority_queue<int,vector<int>,greater<int> > p2;
int n,a,i,im;

int main()
{
    cin>>n;
    cin>>a;
    p2.push(a);
    printf("%d ",p2.top());
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(a>p2.top())
        {
            p2.push(a);
            if(p1.size()+1<=p2.size())
            {
                im=p2.top();
                p2.pop();
                p1.push(im);
            }
        }
        else
        {
            p1.push(a);
            if(p1.size()>p2.size()+1)
            {
                im=p1.top();
                p1.pop();
                p2.push(im);
            }
        }
        printf("%d ",p1.top());
    }
    return 0;
}
