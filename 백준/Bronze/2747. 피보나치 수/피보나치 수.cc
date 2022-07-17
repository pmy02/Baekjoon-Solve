#include <bits/stdc++.h>
using namespace std;

int n,i,arr[50];

int main()
{
    cin>>n;
    arr[1]=1;

    for(i=2;i<=n;i++)
        arr[i]=arr[i-1]+arr[i-2];

    printf("%d",arr[n]);
}