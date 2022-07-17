#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,sum,minn=10000;

int main()
{
    scanf("%d %d",&n,&m);

    for(i=max(n,2);i<=m;i++)
	{
		int num=0;
		for(j=2;j<i;j++)
			if(i%j==0){
				num=1;
				break;
			}

		if(num==0){
            sum+=i;
            minn=min(minn,i);
		}
	}

    if(sum) printf("%d\n%d",sum,minn);
    else printf("-1");

    return 0;
}
