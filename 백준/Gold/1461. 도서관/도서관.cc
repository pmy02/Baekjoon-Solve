#include <bits/stdc++.h>
using namespace std;

int n, m, pos[10001], answer=0;

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;++i)
        cin >> pos[i];
        
    sort(pos,pos+n+1);
 
    // 0인 지점 구하기
    int pivot=0;
    for(int i=0; i<=n; ++i){
        if(pos[i] == 0){
            pivot = i;
            break;
        }
    }
 
    // 음수 영역    
    for(int i=0; i < pivot; i += m)
        answer += abs(pos[i] * 2);
    
    // 양수 영역
    for(int i=n; i > pivot; i -= m)
        answer += pos[i] * 2;
    
    // 최대로 갔던 거리를 마지막으로 간 것으로 되도록 처리
    answer -= max(abs(pos[0]), abs(pos[n]));
    
    printf("%d", answer);
}