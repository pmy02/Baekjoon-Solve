#include<bits/stdc++.h>
using namespace std;


int n,v,i,a,b,c,start,endd;
int dist[1001];
vector<pair<int,int> > vec[1001];


int dijkstra(int start,int endd)
{
    priority_queue<pair<int,int> > q;
    dist[start]=0;
    q.push({0,start});

    while(!q.empty()){
        int distance=-q.top().first;
        start=q.top().second;
        q.pop();

        if(dist[start]<distance) continue;

        for(int i=0;i<vec[start].size();i++){
            int next=vec[start][i].first;
            int nextdistance=distance+vec[start][i].second;

            if(dist[next]>nextdistance){
                dist[next]=nextdistance;
                q.push({-nextdistance,next});
            }
        }
    }

    return dist[endd];
}


int main()
{
    cin>>n>>v;

    for(i=0;i<v;i++){
        scanf("%d %d %d",&a,&b,&c);
        vec[a].push_back({b,c});
    }

    cin>>start>>endd;

    fill(dist,dist+1001,INT_MAX);

    printf("%d",dijkstra(start,endd));
    return 0;
}
