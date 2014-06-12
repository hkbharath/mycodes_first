#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

void solve(){
  int n;
  long long l,h;
  cin>>n>>l>>h;
  long long ar[n];
  for(int i=0;i<n;i++)
    cin>>ar[i];
  if(l==1){
    cout<<"1"<<endl;
    return;
  }

  sort(ar,ar+n,greater<int>());
  vector<int> divides[n];
  for(int i=0;i<n;i++){
    if(i==0){
      for(int j=l;j<=h;j++){
//	cout<<ar[i]<<" "<<j<<endl;
	if(ar[i]%j==0)
	  divides[i].push_back(j);
      }
    }
    else{
      for(int j=0;j<divides[i-1].size();j++)
	if(ar[i]%divides[i-1][j]==0)
	  divides[i].push_back(divides[i-1][j]);
    }
  }

  long long lcf[n+1];
  lcf[n]=1;
  lcf[n-1]=ar[n-1];
  for(int i=n-2;i>=0;i--){
    lcf[i]=(lcf[i+1]*ar[i])/gcd(lcf[i+1],ar[i]);
    if(lcf[i]>h)lcf[i]=0;
  }

  for(int i=n-1;i>=0;i--){
//    cout<<lcf[i+1]<<" "<<divides[i].size()<<" ";
//    for(int j=0;j<divides[i].size();j++)
//      cout<<divides[i][j]<<" ";
//    cout<<endl;
    if(lcf[i+1]>=l && find(divides[i].begin(),divides[i].end(),lcf[i+1])!=divides[i].end()){
      cout<<lcf[i+1]<<endl;
      return;
    }
  }
  if(lcf[0]>=l)
    cout<<lcf[n-1]<<endl;
  else
    cout<<"NO"<<endl;
}

int main(){
  int t,prob=1;
  cin>>t;
  while(t--){
    cout<<"Case #"<<prob++<<": ";
    solve();
  }
}

