#include <bits/stdc++.h>
using namespace std;

int ax,ay,az,cx,cy,cz;

int main()
{
    cin>>ax>>ay>>az;
    cin>>cx>>cy>>cz;

    printf("%d %d %d",cx-az,cy/ay,cz-ax);
    return 0;
}
