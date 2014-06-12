#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,nxt;
  scanf("%d%d%d",&a,&b,&c);
  while(a || b || c ){
    if(b-a == c-b)
      printf("AP %d\n",c + (c-b));
    else
      printf("GP %lld\n",(long long)c * (c/b));
  scanf("%d%d%d",&a,&b,&c);
  }
}
