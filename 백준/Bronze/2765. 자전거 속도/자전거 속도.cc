#include <bits/stdc++.h>
using namespace std;

int i;
double result,r,c,t;

int main()
{
    for(i=1;;i++){
        scanf("%lf %lf %lf",&r,&c,&t);
        if(!c) break;

        result=3.1415927*r*c/63360;
        printf("Trip #%d: %.2lf %.2lf\n",i,result,result*3600/t);
    }
    return 0;

}
