#include  <bits/stdc++.h>

using namespace std;

int main(){
  int n,a[10001];
  scanf("%d",&n);
  int sum = 0;
  while(n!=-1){
    sum =0;
    for(int i=0;i<n;i++){
      scanf("%d",a+i);
      sum += a[i];
    }
    if(sum%n){
      printf("-1\n");
    }
    else{
    int sol =0;
    sum = sum/n; 
    for(int i=0;i<n;i++)
      sol += (sum-a[i])*(a[i]>sum?0:1); 
    printf("%d\n",sol);
    }
    scanf("%d",&n);
  }
}
	




