#include <bits/stdc++.h>
using namespace std;

int n,m,a,i,j,cnt;
deque <int> d;

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        d.push_back(i);

    while(m--){
        scanf("%d",&a);
        for(i=0;i<d.size();i++)
            if(d[i]==a){
                j=i;
                break;
            }
        if(d.size()-j>j)
            while(1){
				if(d.front()==a) {
                    d.pop_front();
					break;
				}
				cnt++;
				d.push_back(d.front());
				d.pop_front();
			}
        else
            while(1){
				if(d.front()==a) {
                    d.pop_front();
					break;
				}
				cnt++;
				d.push_front(d.back());
				d.pop_back();
			}
    }
    
    printf("%d",cnt);
    return 0;
}
