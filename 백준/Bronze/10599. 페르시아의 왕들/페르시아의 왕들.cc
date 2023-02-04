#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;

int main()
{
    while(1){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(!a&!b&!c&!d) break;

        printf("%d %d\n",c-b,d-a);
    }

    return 0;
}
