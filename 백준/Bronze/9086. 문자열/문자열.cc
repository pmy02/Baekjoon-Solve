#include <bits/stdc++.h>
using namespace std;

int n,i;
char str[1002];

int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("%s",str);
        int k=strlen(str);
        printf("%c%c\n",str[0],str[k-1]);
    }

    return 0;
}
