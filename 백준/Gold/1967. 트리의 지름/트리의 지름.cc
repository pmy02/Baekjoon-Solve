#include<bits/stdc++.h>
using namespace std;


int visited[10001];
int n,i,a,b,c,last,maxx;
vector <pair<int,int> > v[10001];


void DFS(int start,int cnt)
{
    visited[start]=1;

    for(int i=0;i<v[start].size();i++){
        int next=v[start][i].first;

        if(!visited[next]){
            if(cnt+v[start][i].second>maxx){
                maxx=cnt+v[start][i].second;
                last=next;
            }

            DFS(next,cnt+v[start][i].second);
        }
    }
}

int main()
{
    cin>>n;
    
    for(i=1;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    /// 1번 노드부터 시작해서 1번 노드와 가장 먼 노드(last)를 찾는다.
    DFS(1,0);
    memset(visited,0,sizeof(visited));
    
    /// last번 노드와 가장 먼 노드가 트리의 지름이다.
    DFS(last,0);
    
    printf("%d",maxx);
    return 0;
}
