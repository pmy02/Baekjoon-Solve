#include <bits/stdc++.h>
using namespace std;

int i,n,m,odd,even;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&m);

        if(m%2==1) odd++;
        else even++;
    }

    printf("%d",even==n/2&&n==odd+even?1:0);
    return 0;
}
