#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,s;
  cin>>n>>s;
  int a[n];
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  sort(a,a+n);
  sum-=a[n-1];
  if(sum>s)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
}
