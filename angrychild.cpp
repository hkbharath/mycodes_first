#include <bits/stdc++.h>

using namespace std;

int n,k,ar[100001];
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++)
    cin>>ar[i];
  sort(ar,ar+n);
  long long sum[n+1];
  sum[0]=0;
  for(int i=0;i<n;i++)
    sum[i+1]=sum[i]+ar[i];
  long long m;
  long long pre=0;
  for(int i=1;i<k;i++){
    pre=pre+ar[i]*(i)-sum[i];
    //cout<<pre<<" "<<i<<" "<<ar[i]<<" "<<sum[i]<<endl;
  }
  m=pre;
  for(int i=k;i<n;i++){
    pre=pre+ar[i]*(k-1)-2*(sum[i]-sum[i-k+1])+(k-1)*ar[i-k+1];
    m = min(m,pre);
    //cout<<pre<<endl;
  }
  cout<<m<<endl;
}
