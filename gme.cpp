#include <bits/stdc++.h>

using namespace std;

long long min3(long long a,long long b, long long c){
  a = min(a,b);
  a = min(a,c);
  return a;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ar[n];
    long long  dp[n];
    for(int i=0;i<n;i++)
      cin>>ar[i];
    long long sum = 0;
    dp[0] = ar[n-1];
    dp[1] = ar[n-2]+dp[0];
    dp[2] = ar[n-3]+dp[1];
    sum = dp[2];
    for(int i=3;i<n;i++){
      sum +=ar[n-i-1];
      dp[i] = sum - min3(dp[i-1],dp[i-2],dp[i-3]);
    }
    cout<<dp[n-1]<<endl;
  }
}
