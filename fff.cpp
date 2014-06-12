#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  int a[10000];
  for(int i=0;i<10000;i++)
    a[i] = -1;
  int fr,m;
  for(int i=0;i<n;i++){
    scanf("%d%d",&fr,&m);
    a[fr] = 0;
    for(int j=0;j<m;j++){
      scanf("%d",&fr);
      a[fr] = a[fr]==-1?1:a[fr];
    }
  }
  int cnt =0;
  for(int i=0;i<10000;i++)
    cnt += (1*(a[i]==1?1:0));
  printf("%d",cnt);
}
