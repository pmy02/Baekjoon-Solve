#include<bits/stdc++.h>
using namespace std;


#define INF 1000000000

int n,start,endd,m,s,e,w;
long long dist[51];
int visited[51];
int value[51];
vector <pair<int,int> > v[51];
queue<int> cycleNode;


bool BFS()
{
    while(!cycleNode.empty()){
        int j=cycleNode.front();
        cycleNode.pop();

        for(auto cur:v[j]){
            int next=cur.first;
            if(visited[next]) continue;
            visited[next]=1;
            cycleNode.push(next);
        }
    }
    if(visited[endd]) return 1;
    return 0;
}


int main()
{
    cin>>n>>start>>endd>>m;
    
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&s,&e,&w);
        v[s].push_back({e,w});
    }

    for(int i=0;i<n;i++)
        scanf("%d",&value[i]);


    fill(dist,dist+51,INF);
    dist[start]=-value[start];

    for(int i=1;i<=n;i++)
        for(int j=0;j<n;j++){
            for(auto cur:v[j]){
                int next=cur.first;
                long long val=cur.second-value[next];

                if(dist[j]!=INF && dist[j]+val<dist[next]){
                    dist[next]=dist[j]+val;

                    if(i==n){
                        visited[j]=1;
                        cycleNode.push(j);
                    }
                }
            }
        }

    if(dist[endd]==INF) printf("gg");
    else if(BFS()) printf("Gee");
    else printf("%d",-dist[endd]);

    return 0;
}