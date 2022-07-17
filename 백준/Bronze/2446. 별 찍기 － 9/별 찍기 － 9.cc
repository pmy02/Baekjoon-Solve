#include<bits/stdc++.h>
using namespace std;

int n,i,j,cnt;

int main()
{
    cin>>n;
    for(i=(n-1)*2;i>0;i-=2)
    {
        for(j=0;j<cnt;j++)
            printf(" ");
        cnt++;
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<n*2;i+=2)
    {
        for(j=0;j<cnt;j++)
            printf(" ");
        cnt--;
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
