#include <bits/stdc++.h>
using namespace std;

int n,m,sum;


int main()
{
    while(1){
        cin>>n;
        if(!n) break;

        sum=0;
        while(n){
            sum+=n*n;
            n--;
        }

        printf("%d\n",sum);
    }

    return 0;
}
