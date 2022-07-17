#include <bits/stdc++.h>
using namespace std;

int n,i;
string a[20000];

int cmp(string &p,string &q)
{
    if(p.size()==q.size()) return p<q;
    return p.size()<q.size();
}

int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n,cmp);
    
    for(i=0;i<n;i++)
        if(a[i]!=a[i+1])
            cout<<a[i]<<endl;
    return 0;
}
