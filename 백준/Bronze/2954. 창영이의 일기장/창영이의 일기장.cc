#include <bits/stdc++.h>
using namespace std;

char d[1002];
int a[5]={'a','e','i','o','u'};
int i,j,k,check=1;

int main()
{
    scanf("%[^\n]s",d);
    k=strlen(d);
    for(i=0;i<k;i++){
        for(j=0;j<5;j++)
            if(d[i]==a[j]&&d[i+1]=='p'){
                printf("%c",d[i]);
                check=0;
                break;
            }
        if(check) printf("%c",d[i]);
        else i+=2;
        check=1;
    }

    return 0;
}
