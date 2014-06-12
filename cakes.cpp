#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    //printf("%d\n",180%1000);
    if(360%n==0)
      printf("y ");
    else
      printf("n ");
    if(n<=360)
      printf("y ");
    else
      printf("n ");
    if(((n+1)*n)/2 <= 360)
      printf("y\n");
    else
      printf("n\n");
  }
}
