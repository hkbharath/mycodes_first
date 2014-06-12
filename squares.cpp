#include <bits/stdc++.h>

using namespace std;

int main(){
  long long ans[101];
  ans[0]=0;
  for(int i=1;i<=100;i++)
    ans[i]= ans[i-1]+i*i;
  int x;
  scanf("%d",&x);
  while(x!=0){
    printf("%lld\n",ans[x]);
    scanf("%d",&x);
  }
}
