#include <bits/stdc++.h>
using namespace std;

int i,Size;
string s;
int a[60];
int b[60];
int ans[60];
int check[60];

bool near_down(int idx) /// a보다 작으면서 가장 가까운수
{
    for(int i=Size-1;i>=0;i--)
        if(!check[i]){
            if(idx==0&&b[i]==0) continue; /// 첫 자리는 0이 나오면 안됨
            
            if(b[i]<a[idx]){ /// a보다 작은 값이 나오면 이후로 내림차순으로 출력
                check[i]=1;
                
                for(int i=0;i<idx;i++)
                    printf("%d",ans[i]);
                printf("%d",b[i]);

                for(int i=Size-1;i>=0;i--)
                    if(!check[i]) printf("%d",b[i]);

                exit(0);
            }
            else if(b[i]==a[idx]){ /// 같으면 계속 진행
                check[i]=1;
                ans[idx]=b[i];
                near_down(idx+1);
                check[i]=0;
            }
        }

    return true;
}

bool near_up(int idx) /// a보다 크거나 같으면서 가장 가까운수
{
    if(idx==Size){ /// a와 b가 같을 때
        for(int i=0;i<Size;i++)
            printf("%d",ans[i]);
        printf("\n");

        memset(ans,0,sizeof(ans));
        memset(check,0,sizeof(check));

        if(near_down(0)) printf("0");
        
        exit(0);
    }

    for(int i=0;i<Size;i++)
        if(!check[i])
            if(b[i]==a[idx]){ /// 같으면 계속 진행
                check[i]=1;
                ans[idx]=b[i];
                near_up(idx+1);
                check[i]=0;
            }
        else if(b[i]>a[idx]){ /// a보다 큰 값이 나오면 이후로 오름차순으로 출력
            check[i]=1;
            
            for(int i=0;i<idx;i++)
                printf("%d",ans[i]);
            printf("%d",b[i]);

            for(int i=0;i<Size;i++)
                if(!check[i]) printf("%d",b[i]);
            printf("\n");

            memset(ans,0,sizeof(ans));
            memset(check,0,sizeof(check));

            if(near_down(0)) printf("0");
            
            exit(0);
        }

    return true;
}

int main()
{
    cin>>s;

    Size=s.size();
    for(i=0;i<Size;i++)
        a[i]=s[i]-'0';

    cin>>s;
    for(i=0;i<Size;i++)
        b[i]=s[i]-'0';

    sort(b,b+Size);

    if(near_up(0)){
        printf("0\n");  /// 큰 값이 없으면 0 출력
        if(near_down(0)) printf("0");  /// 작은 값이 없으면 0 출력
    }
    
    return 0;
}
