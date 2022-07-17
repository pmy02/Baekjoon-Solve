/// 힙 구조(우선순위 큐)와 인접 리스트 방식(벡터)을 활용한 알고리즘
#include <bits/stdc++.h>
using namespace std;

int V,E,K,u,v,w,i;
int d[20001];
vector<pair<int,int> > arr[20001];


void dijkstra(int start)
{
    d[start]=0;
    priority_queue<pair<int,int> > pq;
    pq.push({0,start});/// 가중치, 끝점 순으로 입력!

    while(!pq.empty()){
        int distance=-pq.top().first; /// 가중치가 짧은 순으로 나오게 음수화.
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
}

int main()
{
    cin>>V>>E>>K;
    for(i=1;i<=V;i++)
        d[i]=INT_MAX;

    for(i=0;i<E;i++){
        scanf("%d %d %d",&u,&v,&w);
        arr[u].push_back({v,w});
    }

    dijkstra(K);

    for(i=1;i<=V;i++)
        if(d[i]==INT_MAX) printf("INF\n");
        else printf("%d\n",d[i]);

    return 0;
}
