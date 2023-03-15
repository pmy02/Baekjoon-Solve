#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,tmp,p;
int arr[101];

int main()
{
    cin>>n>>m;

    for(p=1;p<=n;p++)
        arr[p]=p;

    while(scanf("%d %d",&i,&j)!=EOF)
        for(p=i;p<j;p++){
            tmp=arr[p];
            arr[p]=arr[j];
            arr[j]=tmp;
            j--;
        }

    for(p=1;p<=n;p++)
        printf("%d ",arr[p]);
    
    return 0;
}
