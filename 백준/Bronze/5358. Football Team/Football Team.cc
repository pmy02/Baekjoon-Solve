#include <bits/stdc++.h>
using namespace std;

int i;
string s;

int main()
{
    while(1){
        getline(cin,s);
        if(s=="\0") break;
        
        for(i=0;i<s.size();i++)
            if(s[i]=='i') s[i]='e';
            else if(s[i]=='I') s[i]='E';
            else if(s[i]=='e') s[i]='i';
            else if(s[i]=='E') s[i]='I';
        
        cout<<s<<'\n';
    }

    return 0;
}
