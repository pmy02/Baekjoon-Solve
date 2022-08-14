#include <bits/stdc++.h>
using namespace std;

int n,i,past=-1;
int arr[1000001];
int check[2];


int main()
{
    while(scanf("%1d",&arr[n])!=EOF) n++;

    for(i=0;i<n;i++)
        if(past!=arr[i]){
            check[arr[i]]++;
            past=arr[i];
        }

    printf("%d",min(check[0],check[1]));
    return 0;
}
