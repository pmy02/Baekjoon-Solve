#include <bits/stdc++.h>
using namespace std;

int n,i,sum;
int arr[10000];

int main()
{
    while(1){
        scanf("%d",&n);
        if(n==-1) break;

        int sum=1,idx=0;
        for(i=2;i<n;i++)
            if(n%i==0){
                sum+=i;
                arr[idx]=i;
                idx++;
            }

        if(sum==n){
            printf("%d = 1",n);
            for(i=0;i<idx;i++)
                printf(" + %d",arr[i]);
            printf("\n");
        }
        else printf("%d is NOT perfect.\n",n);
    }

    return 0;
}
