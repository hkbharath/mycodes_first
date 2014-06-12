#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;
  int n,m,ar[101][101];
  int dp[101][101];
  while(t--){
    cin>>n>>m;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
	cin>>ar[i][j];
    dp[0][0]=1;
    int sol=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++){
	if(i)
	  if(ar[i][j]>ar[i-1][j])
	    dp[i][j] = dp[i][j] || dp[i-1][j];
	if(j)
	  if(ar[i][j]>ar[i][j-1])
	    dp[i][j] = dp[i][j] || dp[i][j-1];
	if(dp[i][j])sol = max(sol,i+j);
      }
    cout<<sol+1<<endl;
  }
}


