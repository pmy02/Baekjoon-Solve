#include <bits/stdc++.h>
using namespace std;


int n,i,j;

int main()
{
    cin>>n;
    
    for(i=0;i<n;i++){
        for(j=i;j<n;j++)
            printf("*");
        printf("\n");
    }


    return 0;
}
