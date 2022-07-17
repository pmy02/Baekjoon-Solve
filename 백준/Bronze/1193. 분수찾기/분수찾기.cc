#include<bits/stdc++.h>
using namespace std;

int n,i,j,a=1,b=1,cnt=1;

int main()
{
    cin>>n;

    for(i=1;;i++){
        if(cnt==n) break;
        if(i%2==1){
            b++,cnt++;
            if(cnt==n) break;
            for(j=0;j<i;j++){
                a++,b--,cnt++;
                if(cnt==n) break;
            }
        }
        else{
            a++,cnt++;
            if(cnt==n) break;
            for(j=0;j<i;j++){
                a--,b++,cnt++;
                if(cnt==n) break;
            }
        }
    }

    printf("%d/%d",a,b);
    return 0;
}
