#include <bits/stdc++.h>
using namespace std;

int n,m,i,check;
vector<int> a;
vector<int>::iterator it;
int b[51];
int ch[51];
int rep[1001];

void f(int x)
{
    if(!check){
        if(x>=n){
            for(int i=0;i<x;i++)
                printf("%d ",b[i]);
            check=1;
            return ;
        }
        for(int i=0;i<a.size();i++)
            if(!ch[i]){
                if(x>0&&b[x-1]+1==a[i]) continue;
                rep[a[i]]--;
                if(!rep[a[i]]) ch[i]=1;
                b[x]=a[i];
                f(x+1);
                rep[a[i]]++;
                ch[i]=0;
            }
    }
}


int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&m);
        rep[m]++;
        a.push_back(m);
    }

    sort(a.begin(),a.end());
    it=unique(a.begin(),a.end());
    a.erase(it,a.end());

    f(0);
    return 0;
}
