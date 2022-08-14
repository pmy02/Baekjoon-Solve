#include <bits/stdc++.h>
using namespace std;

int n,past=-1;
int check[2];


int main()
{
    while(scanf("%1d",&n)!=EOF)
       if(past!=n){
            check[n]++;
            past=n;
        }

    printf("%d",min(check[0],check[1]));
    
    return 0;
}