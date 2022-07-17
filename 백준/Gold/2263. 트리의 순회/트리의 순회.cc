#include<bits/stdc++.h>
using namespace std;


int n,i;
int inOrder[100000];
int postOrder[100000];
int idx[100001];


void preOrder(int in_start,int in_end,int post_start,int post_end){
	if(in_start>in_end||post_start>post_end) return;

	/// 후위 순회의 마지막은 항상 루트이다.
	int root=postOrder[post_end];

	printf("%d ",root);

	int in_mid=idx[root];

	preOrder(in_start, in_mid-1,post_start, post_start+in_mid-in_start-1);
	preOrder(in_mid+1, in_end,post_start+in_mid-in_start, post_end-1);
}


int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("%d",&inOrder[i]);
        idx[inOrder[i]]=i;
    }

    for(i=0;i<n;i++)
        scanf("%d",&postOrder[i]);

    preOrder(0,n-1,0,n-1);

    return 0;
}
