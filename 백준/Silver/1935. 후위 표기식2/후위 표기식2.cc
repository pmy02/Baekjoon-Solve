/// 후위표기법 연산
#include<bits/stdc++.h>
using namespace std;

int n,i,k;
double num[26],res,a,b;
char s[101];
stack <double> st;

int main()
{
    cin>>n;

    scanf("%s",&s);
    k=strlen(s);

    for(i=0;i<n;i++)
        scanf("%lf",&num[i]);

    for(i=0;i<k;i++)
        /// 피연산자는 그냥 스택에 넣는다.
        if(s[i]>='A'&&s[i]<='Z') st.push(num[s[i]-'A']);
        /// 연산자는 스택에서 상위 2개의 데이터를 꺼내어 연산자에 맞게 계산한 후, 다시 스택에 넣는다.
        else{
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();

            if(s[i]=='+') res=a+b;
            else if(s[i]=='-') res=b-a;
            else if(s[i]=='*') res=a*b;
            else if(s[i]=='/') res=b/a;

            st.push(res);
        }

    printf("%.2lf",st.top());
    return 0;
}
