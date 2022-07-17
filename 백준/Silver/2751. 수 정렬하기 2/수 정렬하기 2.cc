#include<bits/stdc++.h>
using namespace std;

vector <int> v;
int i,n,m;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&m);
        v.push_back(m);
    }

    sort(v.begin(),v.end());

    for(i=0;i<n;i++){
        printf("%d\n",v[i]);
    }
}
