#include <bits/stdc++.h>
using namespace std;

int i,cnt,t=1,sum;
int a[100];
int ch[100];
string s;

int main()
{
    cin>>s;
    for(i=s.size()-1;i>=0;i--)
        if(s[i]>='0'&&s[i]<='9'){
            a[cnt]+=(s[i]-'0')*t;
            t*=10;
        }
        else if(s[i]=='-'){
            ch[cnt]=1;
            cnt++;
            t=1;
        }
        else{
            cnt++;
            t=1;
        }

    for(i=cnt;i>=0;i--)
        if(ch[i])
            while(i>=0){
                sum-=a[i];
                i--;;
            }
        else sum+=a[i];

    printf("%d",sum);
    return 0;
}
