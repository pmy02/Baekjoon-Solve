#include<bits/stdc++.h>
using namespace std;


int n,m,i,start,endd,result=INT_MAX;
int num[100000];


int main()
{
    cin>>n>>m;

    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    sort(num,num+n);

    while(start<n&&endd<n){
        int diff=num[endd]-num[start];

        if(diff>=m&&diff<result) result=diff;

        if(result==m) break;


        if(diff<m) endd++;
        else start++;
    }

    cout<<result;
    return 0;
}
