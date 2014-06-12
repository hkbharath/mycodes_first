#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k,x;
  long long a[100001];
  scanf("%d%d",&n,&k);
  int a_max=-2e9,a_min=2e9,min_pos=0,max_pos=0;
  for(int i=0;i<n;i++){
    scanf("%lld",a+i);
    if(a[i]>a_max)max_pos=i,a_max=a[i];
    if(a[i]<a_min)min_pos=i,a_min=a[i];
  }
  if(k==0){
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
  }
  for(int i=0;i<n;i++)
    a[i]=a_max-a[i];
  if(k%2==1)
    for(int i=0;i<n;i++)printf("%lld ",a[i]);
  else
    for(int i=0;i<n;i++)printf("%lld ",a[min_pos]-a[i]);
}
