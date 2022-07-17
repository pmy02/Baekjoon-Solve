#include<bits/stdc++.h>
using namespace std;


int n,num,i,sum;
vector<int> pos;
vector<int> neg;
vector<int> zero;


int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num==1) sum+=num;
        else if(num>1) pos.push_back(num);
        else if(num<0) neg.push_back(num);
        else zero.push_back(num);
    }

    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());


    /// 양수
    if(pos.size()%2==1) sum+=pos[0];
    for(i=pos.size()-1;i>0;i-=2)
        sum+=pos[i]*pos[i-1];

    /// 음수
    int nsize=neg.size();
    if(nsize%2==1)
        if(zero.size()>0) zero.pop_back();
        else sum+=neg[nsize-1];
    for(i=0;i<nsize-1;i+=2)
        sum+=neg[i]*neg[i+1];

    cout<<sum;
    return 0;
}
