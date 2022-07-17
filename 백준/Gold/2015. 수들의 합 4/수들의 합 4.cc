#include <bits/stdc++.h>
using namespace std;

int n,m,i;
long long ans;
int board[200001];
map<int,long long> mp;


int main()
{
    cin>>n>>m;
    
    for(i=1;i<=n;i++){
        scanf("%d",&board[i]);
        board[i]+=board[i-1];
    }


    for(i=1;i<=n;i++){
        if(board[i]==m) ans++;
        ans+=mp[board[i]-m];
        mp[board[i]]++;
    }

    printf("%lld",ans);
    return 0;
}
