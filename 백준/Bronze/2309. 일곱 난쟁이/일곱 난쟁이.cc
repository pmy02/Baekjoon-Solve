#include <bits/stdc++.h>
using namespace std;

int i,j,k,sum,x,y;
int a[10];

int main()
{
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);

    sort(a,a+9);
    for(i=0;i<8;i++)
        for(j=i+1;j<9;j++){
            for(k=0;k<9;k++)
                if(k!=i&&k!=j) sum+=a[k];

            if(sum==100){
                x=i,y=j;
                i=8;
            }
            sum=0;
        }

    for(i=0;i<9;i++)
        if(i!=x&&i!=y) printf("%d\n",a[i]);

    return 0;
}
