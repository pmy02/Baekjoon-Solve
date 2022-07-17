#include<bits/stdc++.h>
using namespace std;

int i,maxx=-987654321,cnt,v;
string s;
int sum[26];

int main()
{
    cin>>s;
    for(i=0;i<s.size();i++)
        if('a'<=s[i]&&s[i]<='z') sum[s[i]-'a']++;
        else if('A'<=s[i]&&s[i]<='Z') sum[s[i]-'A']++;

    for(i=0;i<26;i++)
        if(sum[i]>maxx) maxx=sum[i];
        
    for(i=0;i<26;i++)
        if(sum[i]==maxx)
        {
            cnt++;
            v=i;
        }
        
    if(cnt>1) printf("?");
    else printf("%c",v+65);
    return 0;
}
