#include <bits/stdc++.h>
using namespace std;

int i,a[3];

int main()
{
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);

    sort(a,a+3);

    for(i=0;i<3;i++)
        printf("%d ",a[i]);

    return 0;
}
