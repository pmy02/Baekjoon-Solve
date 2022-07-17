#include<bits/stdc++.h>
using namespace std;

int i,a,cnt;
string s;

int main()
{
    getline(cin,s);
    a=s.size();
    for(i=0;i<a;i++)
        if(s[i]==' ')cnt++;

    if(!a) printf("0");
    else if(s[a-1]==' '&&s[0]==' ') printf("%d",cnt-1);
    else if(s[a-1]==' '||s[0]==' ') printf("%d",cnt);
    else printf("%d",cnt+1);
    return 0;
}
