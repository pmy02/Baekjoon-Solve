#include<bits/stdc++.h>
using namespace std;

int n,i,maxx;
int k[100002];
stack <int> s;

int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&k[i]);

    s.push(0);
    for(i=1;i<=n+1;i++){
        while(!s.empty()&&k[s.top()]>k[i]){
            int num=s.top();
            s.pop();
            maxx=max(maxx,k[num]*(i-s.top()-1));
        }
        s.push(i);
    }

    printf("%d",maxx);
    return 0;
}
