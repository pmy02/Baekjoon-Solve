#include <bits/stdc++.h>
using namespace std;

int n,c,cnt;
char a,b;

int main()
{
    cin>>n;
    while(n--){
        scanf("\n%c\n%c\n%d",&a,&b,&c);
        if(c<=90) cnt++;

    }

    printf("%d",cnt);
    return 0;
}
