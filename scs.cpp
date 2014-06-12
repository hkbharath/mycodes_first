#include<bits/stdc++.h>
using namespace std;
int main(){
  string a,b;
  cin>>a>>b;
  int la = a.length();
  int lb = b.length();
  int dp[la+1][lb+1];
  int al[26]={0};
  for(int i=0;i<=la;i++)
    dp[i][0]=0;
  for(int i=0;i<=lb;i++)
    dp[0][i]=0;
  int min_len=0;
  for(int i=1;i<=la;i++)
    for(int j=1;j<=lb;j++){
      if(a[i-1]==b[j-1])
	dp[i][j]=dp[i-1][j-1]+1;
      else
	dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
  for(int i=1;i<=la;i++)
    for(int j=1;j<=lb;j++)
      if(dp[i][j]){
	

  cout<<dp[la-1][lb-1];
}
 
