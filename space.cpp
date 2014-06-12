#include <bits/stdc++.h>
using namespace std;

void solve(){
  int l,n,c,x[1001];
  long long tt,t;
  int tm[1000001],dist[1000001];
  vector<int > put;
  scanf("%d%lld%d%d",&l,&t,&n,&c);
  for(int i=0;i<c;i++){
    scanf("%d",&x[i]);
  }
  tt=0;
  for(int i=0;i<n;i++){
    dist[i]=x[i%c];
    if(t){
      if(dist[i]*2<=t)
	t=t-dist[i]*2;
      else{
	put.push_back(dist[i]-t/2);
	t=0;
      }
    }
    else
    	put.push_back(dist[i]);
    tt+=dist[i];
  }
  sort(put.begin(),put.end(),greater<int>());
  long long bonus=0;
  for(int i=0;l && i<n ;i++,l--)
    bonus+=put[i];
  printf("%lld\n",tt-bonus);
}

int main(){
  int t,prob=1;
  cin>>t;
  while(t--){
    cout<<"Case #"<<prob++<<": ";
    solve();
  }
}
