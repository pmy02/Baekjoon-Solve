#include<bits/stdc++.h>
using namespace std;

int a,b,aa,bb,t=100;

int main()
{
    cin>>a>>b;
    while(a)
    {
        aa+=a%10*t;
        a/=10;
        t/=10;
    }
    t=100;
    
    while(b)
    {
        bb+=b%10*t;
        b/=10;
        t/=10;
    }
  
    printf("%d",max(aa,bb));
    return 0;
}
