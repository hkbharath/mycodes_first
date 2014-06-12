#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  int ar[10];
  ar[0]=1;
  ar[1]=1;
  int a[10];
  for(int i=2;i<10;i++){
    memset(a,0,sizeof(a));
    for(int j=1;j<10;j++){
      if(a[(int)pow(i,j)%10]){
	ar[i] = j-1;
	break;
      }
      a[(int)pow(i,j) % 10] = 1;
    }
  }
  if(0)for(int i=0;i<10;i++)
    printf("%d\n",ar[i]);
  scanf("%d",&t);
  while(t--){
    long long b;
    int aa;
    scanf("%d%lld",&aa,&b);
    b = b%ar[aa%10];
    if(!b) b = ar[aa%10];
    printf("%d\n",(int)pow(aa%10,(int)b)%10);
  }
}
