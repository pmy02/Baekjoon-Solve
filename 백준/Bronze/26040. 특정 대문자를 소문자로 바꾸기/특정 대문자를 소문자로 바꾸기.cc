#include <bits/stdc++.h>
using namespace std;

int i;
int alpha[100];
char c;
string s;

int main()
{
    cin>>s;
    while(scanf("\n%c",&c)!=EOF)
        alpha[c-'A']=1;

    for(i=0;i<s.size();i++)
        if(alpha[s[i]-'A']) s[i]+=32;

    cout<<s;
    return 0;
}
