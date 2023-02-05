#include <bits/stdc++.h>
using namespace std;

int a,b,c;

int main()
{
    cin>>a>>b>>c;
    while(c){
        if(a/2>=b) a--;
        else b--;
        c--;
    }

    printf("%d",min(a/2,b));
    return 0;
}
