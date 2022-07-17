#include <bits/stdc++.h>
using namespace std;

long long int a,b,m;

int main()
{
    scanf("%lld %lld",&a,&b);
    m= a>=b? a-b : b-a;
    printf("%lld",m);

    return 0;
}
