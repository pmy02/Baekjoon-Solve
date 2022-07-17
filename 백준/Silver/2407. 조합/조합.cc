#include <bits/stdc++.h>
using namespace std;

int n,m;
string cache[101][101];

string add(string x,string y)
{
    long long sum=0;
    string s;
    while(!x.empty()||!y.empty()||sum){
        if(!x.empty()){
            sum+=x.back()-'0';
            x.pop_back();
        }
        if(!y.empty()){
            sum+=y.back()-'0';
            y.pop_back();
        }
        s.push_back((sum%10)+'0');
        sum/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

string c(int x,int y)
{
    if(x==y||y==0) return "1";
    string &s=cache[x][y];
    if(s!="") return s;

    s=add(c(x-1,y-1),c(x-1,y));
    return s;
}

int main()
{
    scanf("%d %d",&n,&m);
    cout<<c(n,m);

    return 0;
}
