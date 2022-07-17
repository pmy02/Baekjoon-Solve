#include<bits/stdc++.h>
using namespace std;

int t=1,i;
long long sum;
string s;

int main()
{
    cin>>s;
    for(i=s.size()-1;i>=0;i--)
    {
        if(s[i]>='1'&&s[i]<='9') sum+=(s[i]-'0')*t;
        else if(s[i]>='A'&&s[i]<='F') sum+=(s[i]-55)*t;
        t*=16;
    }

    printf("%lld",sum);
    return 0;
}
