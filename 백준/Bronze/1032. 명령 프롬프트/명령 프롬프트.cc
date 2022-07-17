#include <bits/stdc++.h>
using namespace std;

int n,i,j,k;
char d[51][51];
char a[51],check;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%s",&d[i]);
    k=strlen(d[0]);
    for(i=0;i<k;i++){
        check=d[0][i];
        for(j=1;j<n;j++)
            if(check!=d[j][i]) break;
        if(j==n) a[i]=check;
        else a[i]='?';
    }

    printf("%s",a);
    return 0;
}
