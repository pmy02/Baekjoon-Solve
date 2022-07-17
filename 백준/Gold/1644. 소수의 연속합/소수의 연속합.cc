#include<bits/stdc++.h>
using namespace std;


int n,i,j,start,endd,cnt;
int arr[4000001];
vector <int> prime_num;


int main()
{
    cin>>n;

    arr[1]=1;
    for(i=2;i<=n;i++){
        if(arr[i]) continue;

        prime_num.push_back(i);
        for(j=2;i*j<=n;j++)
            arr[i*j]=1;
    }
    
    if(n>1){
        int psize=prime_num.size();
        int sum=prime_num[0];

        while(start<psize && endd<psize){
            if(sum==n){
                cnt++;
                sum-=prime_num[start];
                start++;
                endd++;
                sum+=prime_num[endd];
            }
            else if(sum<n){
                endd++;
                sum+=prime_num[endd];
            }
            else{
                sum-=prime_num[start];
                start++;
            }
        }
    }

    printf("%d",cnt);
    return 0;
}
