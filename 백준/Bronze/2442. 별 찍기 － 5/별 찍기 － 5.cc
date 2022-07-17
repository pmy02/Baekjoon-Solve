#include<bits/stdc++.h>
using namespace std;

int n,i,j,cnt=1;

int main()
{
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++)
            printf(" ");

        for(j=0;j<cnt;j++)
            printf("*");
        printf("\n");
        cnt+=2;
    }

    return 0;
}
