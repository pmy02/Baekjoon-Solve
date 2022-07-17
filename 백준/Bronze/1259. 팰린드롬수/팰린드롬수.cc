#include <bits/stdc++.h>
using namespace std;

char d[7];
int k,x,y;

int main()
{
    while(1){
        scanf("%s",d);
        if(d[0]=='0') break;

        k=strlen(d);
        x=0,y=k-1;
        while(1){
            if(d[x]!=d[y]||x>y) break;
            x++;
            y--;
        }

        if(x>y) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
