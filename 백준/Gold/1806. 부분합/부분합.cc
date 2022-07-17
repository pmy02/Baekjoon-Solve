#include<bits/stdc++.h>
using namespace std;


int n,s,minn=INT_MAX,start,endd,cnt=1;
int arr[100000];


int main()
{
    cin>>n>>s;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int sum=arr[0];
    while(start<n&&endd<n)
        if(sum>=s){
            minn=min(minn,cnt);
            sum-=arr[start];
            start++;
            cnt--;
        }
        else if(sum<s){
            endd++;
            cnt++;
            sum+=arr[endd];
        }

    if(minn==INT_MAX) printf("0");
    else printf("%d",minn);
    return 0;
}
