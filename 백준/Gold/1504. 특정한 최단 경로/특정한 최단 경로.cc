#include <bits/stdc++.h>
using namespace std;


int N,E,a,b,c,v1,v2,i,cnt,cnt1,cnt2;
int d[801];
vector<pair<int,int> > arr[801];


int dijkstra(int start,int endd)
{
    fill(d,d+801,INT_MAX);
    d[start]=0;
    priority_queue<pair<int,int> > pq;
    pq.push({0,start});

    while(!pq.empty()){
        int distance=-pq.top().first;
        start=pq.top().second;
        pq.pop();

        if(d[start]<distance) continue;

        for(int i=0;i<arr[start].size();i++){
            int next=arr[start][i].first;
            int nextDistance=distance+arr[start][i].second;

            if(d[next]>nextDistance){
                d[next]=nextDistance;
                pq.push({-nextDistance,next});
            }
        }
    }

    return d[endd];
}

int main()
{
    cin>>N>>E;

    for(i=0;i<E;i++){
        scanf("%d %d %d",&a,&b,&c);
        arr[a].push_back({b,c});
        arr[b].push_back({a,c});
    }

    cin>>v1>>v2;
    
    a=dijkstra(1,v1);
    b=dijkstra(v1,v2);
    c=dijkstra(v2,N);
    if(a==INT_MAX||b==INT_MAX||c==INT_MAX) cnt1=INT_MAX;
    else cnt1=a+b+c;

    a=dijkstra(1,v2);
    b=dijkstra(v2,v1);
    c=dijkstra(v1,N);
    if(a==INT_MAX||b==INT_MAX||c==INT_MAX) cnt2=INT_MAX;
    else cnt2=a+b+c;

    cnt=min(cnt1,cnt2);
    
    if(cnt==INT_MAX) printf("-1");
    else printf("%d",cnt);
    
    return 0;
}
