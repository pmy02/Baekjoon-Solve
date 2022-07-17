#include <bits/stdc++.h>
using namespace std;

int k,i,cnt;
char d[102];

int main()
{
    scanf("%s",&d);

    k=strlen(d);
    for(i=0;i<k;i++)
        if(d[i]>='a'&&d[i]<='z'||d[i]>='A'&&d[i]<='Z') cnt++;

    printf("%d",cnt);
    return 0;
}
