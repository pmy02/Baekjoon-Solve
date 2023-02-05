#include <bits/stdc++.h>
using namespace std;

int i,chk;
char s[12];

int main()
{
    for(i=1;i<=5;i++){
        scanf("%s",s);
        char* ptr = strstr(s,"FBI");
        if(ptr!=NULL){
            printf("%d\n",i);
            chk=1;
        }
    }

    if(!chk) printf("HE GOT AWAY!");
    return 0;
}
