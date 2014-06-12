#include <bits/stdc++.h>
using namespace  std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==y){
      if(x%2)
	printf("%d\n",2*x-1);
      else
	printf("%d\n",2*x);
    }
    else if(x-2 == y){
      if(x%2)
	printf("%d\n",2*x-3);
      else
	printf("%d\n",2*x-2);
    }
    else
      printf("No Number\n");
  }
}
  
