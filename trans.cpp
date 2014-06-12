#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t,c;
  cin>>n>>t>>c;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int dp[n];
  memset(dp,0,sizeof(dp));
  if(a[0]<=t)
    dp[0]=1;
  for(int i=1;i<n;i++)
    if(a[i]<=t)
      dp[i]=dp[i-1]+1;
  int sol=0;
  for(int i=0;i<n;i++)
    if(dp[i]>=c)
      sol++;
  cout<<sol;
}
