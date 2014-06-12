#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,ar[100001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      scanf("%d",ar+i);
    sort(ar,ar+n);
    int x=0,y=n-1;
    for(int i=0;i<n;i++){
      if(i%2)
	printf("%d ",ar[y--]);
      else
	printf("%d ",ar[x++]);
    }
    printf("\n");
  }
}

