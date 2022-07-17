#include<bits/stdc++.h>
using namespace std;


struct Node
{
    char left;
    char right;
};
int n,i,k;
char A,B,C;
vector <Node> v(26);


void preOrder(char node){ /// 전위 순회
	/// root - left - right
	if(node == '.') return;

	printf("%c", node);
	preOrder(v[node].left);
	preOrder(v[node].right);
}

void inOrder(char node){ /// 중위 순회
	// left - root - right
	if(node == '.') return;

	inOrder(v[node].left);
	printf("%c", node);
	inOrder(v[node].right);
}

void postOrder(char node){ /// 후위 순회
	/// left - right - root
	if(node == '.') return;

	postOrder(v[node].left);
	postOrder(v[node].right);
	printf("%c", node);
}


int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("\n%c\n%c\n%c",&A,&B,&C);
        v[A].left=B;
        v[A].right=C;
    }

    preOrder('A');
	printf("\n");

	inOrder('A');
	printf("\n");

	postOrder('A');

    return 0;
}
