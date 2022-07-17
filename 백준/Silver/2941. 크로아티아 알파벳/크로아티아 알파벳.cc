#include<bits/stdc++.h>
using namespace std;

int i,cnt;
string s;

int main()
{
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='c'&&s[i+1]=='='||s[i]=='c'&&s[i+1]=='-') i++;
        else if(s[i]=='d'&&s[i+1]=='z'&&s[i+2]=='=') i+=2;
        else if(s[i]=='d'&&s[i+1]=='-') i++;
        else if(s[i]=='l'&&s[i+1]=='j'||s[i]=='n'&&s[i+1]=='j') i++;
        else if(s[i]=='s'&&s[i+1]=='='||s[i]=='z'&&s[i+1]=='=') i++;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}
