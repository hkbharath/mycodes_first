#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long ways[41];
  ways[0]=0;
  ways[1]=1;
  ways[2]=1;
  ways[3]=1;
  ways[4]=2;
  for(int i=5;i<41;i++)ways[i]=ways[i-1]+ways[i-4];
  int prime[1000001];
  memset(prime,0,sizeof(prime));
  prime[0]=prime[1]=0;
  for(int i=2;i<1000000;i++)
    if(prime[i]==0)
      for(int j=2;i*j<1000000;j++)
      	prime[i*j]=1;
  for(int i=2;i<1000000;i++){
    if(prime[i]==0)
      prime[i]=prime[i-1]+1;
    else prime[i]=prime[i-1];
  }

  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    printf("%d\n",prime[ways[n]]);
  }
}
