#include<bits/stdc++.h>
using namespace std;

int k,v,e,a,b,i,j;
int visited[20001];
int ch[20001];
vector<int> vec[20001];

void BFS(int x)
{
    queue<int> q;
    visited[x]=1;
    ch[x]=1;
    q.push(x);
    int team=1;

    while(!q.empty()){
        x=q.front();
        q.pop();

        if(ch[x]==1) team=2;
        else if(ch[x]==2) team=1;

        for(int i=0;i<vec[x].size();i++)
            if(visited[vec[x][i]]==0){
                q.push(vec[x][i]);
                visited[vec[x][i]]=1;
                ch[vec[x][i]]=team;
            }
    }

}


int main()
{
    cin>>k;
    while(k--){
        cin>>v>>e;
        while(e--){
            scanf("%d %d",&a,&b);
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        for(i=1;i<=v;i++)
            if(!visited[i]) BFS(i);

        int check=1;
        for(i=1;i<=v;i++)
            for(j=0;j<vec[i].size();j++)
                if(ch[i]==ch[vec[i][j]]){
                    check=0;
                    break;
                }

        if(check) printf("YES\n");
        else printf("NO\n");

        for(i=1;i<=v;i++)
            vec[i].clear();
        memset(visited,0,sizeof(visited));
        memset(ch,0,sizeof(ch));
    }
    
    return 0;
}
