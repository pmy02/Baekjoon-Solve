#include <bits/stdc++.h>
using namespace std;

int k;
char a[12];

int main()
{
    scanf("%s",&a);
    
    k=strlen(a);
    sort(a,a+k,greater<char>());
    
    printf("%s",a);
    return 0;
}
