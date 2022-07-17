#include<bits/stdc++.h>
using namespace std;


int n,num,i,root,exclude,cnt;
vector<int> v[50];


void DFS(int node)
{
    if(v[node].size()==0) cnt++;
    else if(v[node].size()==1&&v[node][0]==exclude) cnt++;

    for(int i=0;i<v[node].size();i++)
        if(v[node][i]!=exclude){
            DFS(v[node][i]);
        }
}


int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num==-1) root=i;
        else v[num].push_back(i);
    }
    
    cin>>exclude;

    if(root!=exclude) DFS(root);

    printf("%d",cnt);
    return 0;
}
