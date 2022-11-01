#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,num;
int A[100][100];

int main()
{
    cin>>n>>m;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf("%d",&num);
            A[i][j]+=num;
        }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }

    return 0;
}
