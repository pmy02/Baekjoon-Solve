#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    while(1){
        getline(cin,s);
        if(s[0]=='#') break;

        int cnt=0;
        for(int i=0;i<s.size();i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') cnt++;
        printf("%d\n",cnt);
    }

    return 0;
}
