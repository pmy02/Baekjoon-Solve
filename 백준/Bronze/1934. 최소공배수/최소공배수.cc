#include <bits/stdc++.h>
using namespace std;

int n,a,b,i,d;

int f(int x,int y)
{
    if(x%y==0) return y;
    else return f(y,x%y);
}

int main()
{
    cin>>n;
    
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        d=f(a,b);
        printf("%d\n",a*b/d);
    }

    return 0;
}
