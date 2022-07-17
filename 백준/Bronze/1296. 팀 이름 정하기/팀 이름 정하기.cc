#include <bits/stdc++.h>
using namespace std;

int n,i,j,L,O,V,E,LL,OO,VV,EE,maxx=-1;
string s[50],ss;

int main()
{
    cin>>ss;
    for(i=0;i<ss.size();i++)
        if(ss[i]=='L') L++;
        else if(ss[i]=='O') O++;
        else if(ss[i]=='V') V++;
        else if(ss[i]=='E') E++;

    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];

    sort(s,s+n);
    for(i=0;i<n;i++){
        LL=L,OO=O,VV=V,EE=E;
        for(j=0;j<s[i].size();j++)
            if(s[i][j]=='L') LL++;
            else if(s[i][j]=='O') OO++;
            else if(s[i][j]=='V') VV++;
            else if(s[i][j]=='E') EE++;

        int sum=((LL+OO)*(LL+VV)*(LL+EE)*(OO+VV)*(OO+EE)*(VV+EE))%100;
        if(sum>maxx) maxx=sum,ss=s[i];
    }

    cout<<ss;
    return 0;
}
