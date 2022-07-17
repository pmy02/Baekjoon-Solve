#include <bits/stdc++.h>
using namespace std;

int i,k,n,m,aa,bb,maxx;
int a[100001];
int b[200001];

int main()
{
    cin>>n;
    while(n--){
        scanf("%d",&m);
        if(m>maxx)
            for(i=maxx;i<m;i++){
                a[aa++]=i+1;
                b[bb++]='+';
            }
        else if(a[aa-1]!=m){
            printf("NO");
            return 0;
        }
        aa--;
        b[bb++]='-';
        if(m>maxx) maxx=m;
    }

    for(i=0;i<bb;i++)
        printf("%c\n",b[i]);
    return 0;
}
