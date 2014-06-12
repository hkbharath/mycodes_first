#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int T;
    int cv,ct;
    double mat[4][4],ans[4],lhs[4];
    for(int i=0;i<4;i++){
      scanf("%d%d",&ct,&cv);
      for(int j=0;j<4;j++)
	mat[i][j]=pow(ct,j);
      lhs[i]=cv;
    }
  }
}
