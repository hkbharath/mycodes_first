#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int ar[n+1];
  for(int i=0;i<n;i++)
    cin>>ar[i];
  sort(ar,ar+n);
  int ans=0;
  int i=0;
  while(i<n && ar[i]<=k){
    if(i+1<n && i+2 <n && ar[i+1]<=k && ar[i+2]<=k)
      ans+=1;
    else
      break;
    i+=3;
  }
  cout<<ans<<endl;
}


