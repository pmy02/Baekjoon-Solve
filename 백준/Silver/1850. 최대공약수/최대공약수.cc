#include <bits/stdc++.h>
using namespace std;

long long int f(long long int x,long long int y)
{
    if(x%y==0) return y;
    else return f(y,x%y);
}


int main()
{
    long long int a,b,sum;
    scanf("%lld %lld",&a,&b);
    sum=f(a,b);
    for(int i=0;i<sum;i++)
        printf("1");
}
