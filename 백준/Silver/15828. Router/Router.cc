#include <bits/stdc++.h>
using namespace std;

int n,buffer;
queue<int> q;

int main()
{
    cin>>buffer;
    
    while(1){
        scanf("%d",&n);

        if(n==-1) break; /// 입력 끝
        else if(!n) q.pop(); /// 0일 때
        else if(n>0 && q.size()<buffer) q.push(n); /// 버퍼가 여유있으면 추가
    }

    if(q.empty()) printf("empty");
    else
        while(!q.empty()){
            printf("%d ",q.front());
            q.pop();
        }
    
    return 0;
}
