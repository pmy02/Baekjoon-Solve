#include<bits/stdc++.h>
using namespace std;

int n,i,j;

int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
