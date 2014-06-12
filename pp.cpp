#include<bits/stdc++.h>
using namespace std;
int main(){
  long long sol=0,fsol=0;
  int n,m;
  scanf("%d%d",&n,&m);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",a+i);
  int cc=0;
  for(int i=n/2+1;i<n;i++){
    if(a[i]!=a[n/2])
      cc++,sol+=a[i]-a[i-1];
    if(cc==m){
      fsol+=2*sol;
      sol=0;
      cc=0;
    }
  }
  fsol+=2*sol;
  cc=0;
  sol=0;
  for(int i=n/2-1;i>=0;i--){
    if(a[i]!=a[n/2])
      cc++,sol+=a[i+1]-a[i];
    if(cc==m){
      fsol+=2*sol;
      sol=0;
      cc=0;
    }
  }
  fsol+=2*sol;
  printf("%lld\n",fsol);
}


