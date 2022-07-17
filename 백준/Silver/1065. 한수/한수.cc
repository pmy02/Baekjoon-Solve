#include<bits/stdc++.h>
using namespace std;

int a[1001];
int i,j,k,n,m,v,cnt;

int main()
{
    cin>>m;
    for(i=1;i<=m;i++)
    {
        n=i;
        while(n)
        {
            a[j]=n%10;
            n/=10;
            j++;
        }
        j--;
        if(j==0||j==1) cnt++;
        else
        {
            v=a[1]-a[0];
            for(k=0;k<j;k++)
                if(a[k]+v!=a[k+1]) break;
            if(k==j) cnt++;
        }
        j=0;
    }

    printf("%d",cnt);
    return 0;
}
