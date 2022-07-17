#include<stdio.h>

int f(int x,int y)
{
    if(x%y==0) return y;
    else return f(y,x%y);
}

int main()
{
    int a,b,gcd,lcm=0;
    scanf("%d %d",&a,&b);

    gcd=f(a,b);
    lcm=a*b/gcd;
    printf("%d\n%d",gcd,lcm);
}
