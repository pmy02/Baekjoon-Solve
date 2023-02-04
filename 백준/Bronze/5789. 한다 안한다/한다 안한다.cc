#include <bits/stdc++.h>
using namespace std;

int i,n,a,b;
string s;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        
        if(s[s.size()/2]==s[s.size()/2-1]) printf("Do-it\n");
        else printf("Do-it-Not\n");
    }

    return 0;
}
