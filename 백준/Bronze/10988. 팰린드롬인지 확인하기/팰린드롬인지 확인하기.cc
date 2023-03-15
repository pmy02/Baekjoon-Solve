#include <bits/stdc++.h>
using namespace std;

int i,j;
string s;

int main()
{
    cin>>s;
    
    i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            printf("0");
            return 0;
        }
        
        i++,j--;
    }

    printf("1");
    return 0;
}
