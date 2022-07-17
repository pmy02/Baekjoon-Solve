#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,k,p;
string s,a;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m>>s;
        for(j=0;j<s.size();j++)
            for(k=0;k<m;k++)
                a+=s[j];
        cout<<a<<"\n";
        a.clear();
    }

    return 0;
}
