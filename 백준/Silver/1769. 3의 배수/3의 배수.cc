#include<bits/stdc++.h>
using namespace std;

int k,i,sum,cnt=1;
char a[1000001];


int main()
{
    scanf("%s",&a);
    k=strlen(a);
    for(i=0;i<k;i++)
        sum+=a[i]-'0';

    if(sum<10) printf("0\n");
    else{
        while(sum>=10){
            int temp=sum,im=0;
            while(temp){
                im+=temp%10;
                temp/=10;
            }
            sum=im;
            cnt++;
        }
        printf("%d\n",cnt);
    }

    if(sum%3==0) printf("YES");
    else printf("NO");

    return 0;
}
