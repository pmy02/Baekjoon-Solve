#include<bits/stdc++.h>
using namespace std;

int n,a,i;
int data1[100];
int data2[100];

int f(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    if(data1[n] != 0) return data1[n];
    else
    {
        data1[n]=f(n-1)+f(n-2);
        return data1[n];
    }
}

int ff(int n)
{
    if(n==0) return 1;
    else if(n==1) return 0;
    if(data2[n] != 0) return data2[n];
    else
    {
        data2[n]=ff(n-1)+ff(n-2);
        return data2[n];
    }
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        f(a);
        printf("%d %d\n",ff(a),f(a));
    }
}
