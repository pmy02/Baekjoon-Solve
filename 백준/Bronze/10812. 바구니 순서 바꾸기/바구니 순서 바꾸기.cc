#include <bits/stdc++.h>
using namespace std;

int i,j,k,n,m,a,b,c;
int arr[101];
int tmp[101];

int main()
{
    cin>>n>>m;

    for(i=1;i<=n;i++) arr[i]=i;

    for(i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&c);

        for(k=0,j=a;j<c;j++,k++)
            tmp[k]=arr[j];

        for(j=c;j<=b;j++){
            arr[a]=arr[j];
            a++;
        }

        for(k=0,j=a;j<=b;j++,k++)
            arr[j]=tmp[k];
    }

    for(i=1;i<=n;i++)
        printf("%d ",arr[i]);
    return 0;
}
