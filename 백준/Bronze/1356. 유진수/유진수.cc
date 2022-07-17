#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,t;
int arr[12];

int main()
{
    cin>>n;
    if(n>2){
       while(n){
            arr[t]=n%10;
            n/=10;
            t++;
        }

        for(i=0;i<t;i++){
            int frontt=1,backk=1;
            for(j=0;j<=i;j++)
                frontt*=arr[j];

            for(k=i+1;k<t;k++)
                backk*=arr[k];

            if(frontt==backk){
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
    return 0;
}
