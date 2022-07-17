#include<bits/stdc++.h>
using namespace std;


int i,n,s,cnt,sum;
int arr[21];
int check[21];


void f(int idx,int x)
{
    if(sum==s&&idx!=0){
        cnt++;
    }
    for(int i=0;i<n;i++){
            if(check[i]||x>i) continue;
            check[i]=1;
            sum+=arr[i];
            f(idx+1,i);
            check[i]=0;
            sum-=arr[i];
    }
}


int main()
{
    cin>>n>>s;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    f(0,0);

    printf("%d",cnt);
    return 0;
}
