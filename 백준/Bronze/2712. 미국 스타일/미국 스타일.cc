#include <bits/stdc++.h>
using namespace std;

int i,n;
double m;
string s;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m>>s;

        if(s=="kg") printf("%.4lf lb\n",m*2.2046);
        else if(s=="lb") printf("%.4lf kg\n",m*0.4536);
        else if(s=="l") printf("%.4lf g\n",m*0.2642);
        else if(s=="g") printf("%.4lf l\n",m*3.7854);
    }

    return 0;
}
