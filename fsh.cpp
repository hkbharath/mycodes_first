#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int sol = 0,n,a[1001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      scanf("%d",a+i);
    sort(a,a+n);
    int ip[1001];

    for(int i=0;i<n;i++){
      scanf("%d",ip+i);
    }
    sort(ip,ip+n);
    for(int i=0;i<n;i++)
      sol += (ip[i]*a[i]);
    printf("%d\n",sol);
  }
}
    
