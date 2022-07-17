#include<bits/stdc++.h>
using namespace std;

int i,j,cnta,cntb;
int a[8];

int main()
{
    for(i=0;i<8;i++)
        scanf("%d",&a[i]);

    for(i=1;i<8;i++)
        if(a[i]>a[i-1]) cnta++;
        else cntb++;

    if(cnta==7) printf("ascending");
    else if(cntb==7) printf("descending");
    else printf("mixed");

    return 0;
}
