#include <bits/stdc++.h>
using namespace std;

int n,i;

int main()
{
    cin>>n;

    for(i=0;i<=30;i++){
        int poww=pow(2,i);
        
        if(poww==n){
            printf("1");
            return 0;
        }
    }

    printf("0");
    return 0;
}
