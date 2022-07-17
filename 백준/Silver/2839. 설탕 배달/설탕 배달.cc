#include <bits/stdc++.h>
using namespace std;

int n,cnt,i,j;

int main()
{
    cin>>n;
    while(n)
        if(n%5==0){
            cnt++;
            n-=5;
        }
        else if(n%3==0){
            cnt++;
            n-=3;
        }
        else if(n>5){
            n-=5;
            cnt++;
        }
        else{
            cnt=-1;
            break;
        }

    printf("%d",cnt);
    return 0;
}
