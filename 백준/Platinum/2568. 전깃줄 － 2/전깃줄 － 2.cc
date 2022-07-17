#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int x;
    int y;
}z[100001];
int n,i;
vector <int> v;
vector <int> idx;
vector <int> ans;


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
        if(v.back()<z[i].y){
            v.push_back(z[i].y);
            idx.push_back(v.size()-1);
        }
        else{
            int arr_idx=lower_bound(v.begin(),v.end(),z[i].y)-v.begin();

            v[arr_idx]=z[i].y;
            idx.push_back(arr_idx);
        }

    printf("%d\n",n-v.size()+1);

    int cnt=v.size()-1;
    for(i=idx.size()-1;i>=0;i--)
        if(idx[i]==cnt)cnt--;
        else ans.push_back(z[i].x);

    sort(ans.begin(),ans.end());
    for(i=0;i<ans.size();i++)
        printf("%d ",ans[i]);
    return 0;
}
