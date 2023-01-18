#include<bits/stdc++.h>
using namespace std;


int n,a,b;

int main()
{
    cin>>n;
    
    if(n/10<=10) a=n/10,b=n%10;
    else a=n/100,b=n%100;

    printf("%d",a+b);
    return 0;
}
