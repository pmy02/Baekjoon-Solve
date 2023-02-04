#include <bits/stdc++.h>
using namespace std;

int n,i;
string s;

int main()
{
    scanf("%d\n",&n);

    for(i=0;i<n;i++){
        getline(cin,s);
        
        if(s[0]>='a'&&s[0]<='z') s[0]-=32;
        cout<<s<<'\n';
    }

    return 0;
}
