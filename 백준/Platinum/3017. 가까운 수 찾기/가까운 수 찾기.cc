#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
string s;int i,Size,a[60],b[60],ans[60],check[60];
bool near_down(int idx){for(int i=Size-1;i>=0;i--)if(!check[i]){if(idx==0&&b[i]==0) continue;if(b[i]<a[idx]){check[i]=1;for(int i=0;i<idx;i++)printf("%d",ans[i]);printf("%d",b[i]);for(int i=Size-1;i>=0;i--)if(!check[i]) printf("%d",b[i]);exit(0);}else if(b[i]==a[idx]){check[i]=1;ans[idx]=b[i];near_down(idx+1);check[i]=0;}}return true;}
bool near_up(int idx){if(idx==Size){for(int i=0;i<Size;i++)printf("%d",ans[i]);printf("\n");memset(ans,0,sizeof(ans));memset(check,0,sizeof(check));if(near_down(0)) printf("0");exit(0);}for(int i=0;i<Size;i++)if(!check[i])if(b[i]==a[idx]){check[i]=1;ans[idx]=b[i];near_up(idx+1);check[i]=0;}else if(b[i]>a[idx]){check[i]=1;for(int i=0;i<idx;i++)printf("%d",ans[i]);printf("%d",b[i]);for(int i=0;i<Size;i++)if(!check[i])printf("%d",b[i]);printf("\n");memset(ans,0,sizeof(ans));memset(check,0,sizeof(check));if(near_down(0)) printf("0");exit(0);}return true;}
int main(){cin>>s;Size=s.size();for(i=0;i<Size;i++)a[i]=s[i]-'0';cin>>s;for(i=0;i<Size;i++)b[i]=s[i]-'0';sort(b,b+Size);if(near_up(0)){printf("0\n");if(near_down(0)) printf("0");}return 0;}
