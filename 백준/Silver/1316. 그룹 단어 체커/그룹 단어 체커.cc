#include<bits/stdc++.h>
using namespace std;

int n,i,j,cnt;
char key;
int ck[26];
string s;

int main()
{
    cin>>n;

    for(i=0;i<n;i++){
        cin>>s;

        for(j=0;j<s.size();)
            if(ck[s[j]-'a']) break;
            else{
                ck[s[j]-'a']=1;
                key=s[j];
                while(s[j]==key)
                    j++;
            }

        if(j==s.size()) cnt++;

        for(j=0;j<26;j++)
            ck[j]=0;
    }

    printf("%d",cnt);
    return 0;
}
