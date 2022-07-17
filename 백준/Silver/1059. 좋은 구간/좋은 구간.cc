#include<bits/stdc++.h>

using namespace std;

 

int n,m,i,j,p,q,cnt;

int a[50];

 

 

int main()

{

    cin>>n;

    for(i=0;i<n;i++)

        scanf("%d",&a[i]);

    cin>>m;

 

    sort(a,a+n);

 

    for(i=0;i<n;i++)

        if(a[i]==m){

            printf("0");

            return 0;

        }

        else if(a[i]>m) break;

 

    for(j=n-1;j>=0;j--)

        if(a[j]==m){

            printf("0");

            return 0;

        }

        else if(m>a[j]) break;

 

    for(p=a[j]+1;p<=m;p++)

        for(q=m;q<a[i];q++)

            if(p!=q) cnt++;

 

    printf("%d",cnt);

    return 0;

}