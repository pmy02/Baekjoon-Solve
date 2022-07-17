#include <bits/stdc++.h>
using namespace std;

int t,n,m,p,i,j,cnt;
int a[100];
queue <int> q;
queue <int> qq;

int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m;
        for(j=0;j<n;j++){
            scanf("%d",&p);
            q.push(p);
            qq.push(j);
            a[j]=p;
        }
        sort(a,a+n);

        cnt=1;
        while(1)
            if(q.front()>=a[j-1]&&qq.front()==m){
                while(!q.empty()) q.pop();
                while(!qq.empty()) qq.pop();
                printf("%d\n",cnt);
                break;
            }
            else if(q.front()>=a[j-1]){
                q.pop();
                qq.pop();
                j--,cnt++;
            }
            else if(q.front()<a[j-1]){
                p=q.front();
                q.pop();
                q.push(p);
                p=qq.front();
                qq.pop();
                qq.push(p);
            }
    }

    return 0;
}
