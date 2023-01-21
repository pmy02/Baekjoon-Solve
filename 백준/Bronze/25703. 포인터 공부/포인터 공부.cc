#include <bits/stdc++.h>
using namespace std;

int i,j,n;

int main()
{
    cin>>n;
    printf("int a;\n");

    for(i=1;i<=n;i++){
        if(i==1) printf("int *ptr = &a;\n");
        else if(i==2) printf("int **ptr2 = &ptr;\n");
        else{
            printf("int ");
            for(j=0;j<i;j++){
                printf("*");
            }
            printf("ptr%d = &ptr%d;\n",i,i-1);
        }
    }
    return 0;
}
