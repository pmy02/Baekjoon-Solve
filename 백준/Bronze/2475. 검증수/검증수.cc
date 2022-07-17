#include <stdio.h>

int n,i,sum;

int main()
{
    for(i=0;i<5;i++){
        scanf("%d",&n);
        sum+=n*n;
    }
    printf("%d",sum%10);

    return 0;
}
