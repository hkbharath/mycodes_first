#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int a;
    scanf("%d",&a);
    int div = 5;
    long long sol =0;
    while(a/div > 0){
      sol += a/div;
      div*=5;
    }
    printf("%lld\n",sol);
  	  
  }
}
