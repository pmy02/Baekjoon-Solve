#include <bits/stdc++.h>
using namespace std;

int i,n;
double minn,x,y;

int main()
{
    scanf("%lf %lf",&x,&y);
    minn=x*1000/y;

    cin>>n;
    for(i=0;i<n;i++){
        scanf("%lf %lf",&x,&y);
        minn=min(minn,x*1000/y);
    }

    printf("%.2lf",minn);
    return 0;

}
