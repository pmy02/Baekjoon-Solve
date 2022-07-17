#include <bits/stdc++.h>
using namespace std;

int n,m,p,i;
int a[100000];

bool cmp(int s,int e,int k)
{
    int m=(s+e)/2;

    while(e-s>=0){
        m=(s+e)/2;
        if(a[m]==k) return 1;
        else if(a[m]>k) e=m-1;
        else s=m+1;
    }
    
    return 0;
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);

    cin>>m;
    for(i=0;i<m;i++){
        scanf("%d",&p);
        if(cmp(0,n-1,p)) printf("1\n");
        else printf("0\n");
    }

    return 0;
}
