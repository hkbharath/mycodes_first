#include <bits/stdc++.h>

using namespace std;

int main(){
  int g[5][5];
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
      cin>>g[i][j];
  for(int i=0;i<5;i++)
    for(int j=0;j<i;j++){
      g[i][j] +=g[j][i];
      g[j][i]= g[i][j];
    }
  int sol =0;
  int x=0;
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
      if(i!=j)for(int k=0;k<5;k++)
	if(k!=i && k!=j) for(int l=0;l<5;l++)
	  if(l!=i && l!=j && l!=k) for(int m=0;m<5;m++)
	    if(m!=i && m!=j && m!=k && m!=l){
	      x = 2*(g[k][j]+g[j][i]) + g[k][l]+ g[l][m];
	      sol = max(sol,x);
	    }

  cout<<sol<<endl;
}
