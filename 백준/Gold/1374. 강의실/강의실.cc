#include <bits/stdc++.h>
using namespace std;

int n,a,s,e,i,cnt;
struct Data
{
    int start;
    int endd;
}z[100000];
priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > q;

bool cmp(Data &p,Data &q)
{
    return p.start<q.start;
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&s,&e);
        z[i].start=s;
        z[i].endd=e;
    }
    sort(z,z+n,cmp);

    for(i=0;i<n;i++){
        if(!q.empty()){
            if (q.top().first>z[i].start) cnt++;
            else q.pop();
        }
        else cnt++;
        q.push({z[i].endd,z[i].start});
    }

    printf("%d",cnt);
    return 0;
}
