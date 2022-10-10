#include <bits/stdc++.h>
using namespace std;

int arr[101];
int n,m,maxx,num_1,i,cnt;

int main() {
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        if(!i) scanf("%d",&num_1);
        else{
            scanf("%d",&m);
            maxx=max(maxx,m);
            arr[m]++;
        }

    for(i=maxx;i>0;i--){
        if(num_1>maxx) break;
        
        arr[maxx]--;
        arr[maxx-1]++;
        cnt++;
        num_1++;
        
        if(!arr[maxx]) maxx--;
    }
    
    printf("%d",cnt);
    return 0;
}
