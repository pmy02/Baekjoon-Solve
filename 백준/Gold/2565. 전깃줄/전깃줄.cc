#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int x;
    int y;
}z[501];
int n,i;
vector <int> v;
vector <int>::iterator it;

bool cmp(Data &p,Data &q)
{
    return p.x<q.x;
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%d %d",&z[i].x,&z[i].y);

    sort(z,z+n,cmp);

    v.push_back(-1);
    for(i=0;i<n;i++)
        if(v.back()<z[i].y) v.push_back(z[i].y);
        else{
            it=lower_bound(v.begin(),v.end(),z[i].y);
            *it=z[i].y;
        }

    printf("%d",n-(v.size()-1));
    return 0;
}
