#include <bits/stdc++.h>
using namespace std;

int n,i,sum;
int a[50];
int b[50];

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    sort(a,a+n);
    sort(b,b+n,cmp);

    for(i=0;i<n;i++)
        sum+=a[i]*b[i];

    printf("%d",sum);

    return 0;
}
