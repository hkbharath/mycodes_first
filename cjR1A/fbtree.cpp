#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int sol,valid[1001];

void dfs(int c,int par){
  valid[c]=1;
  int ch=0;
  for(int i=0;i<adj[c].size();i++)
    if(adj[c][i]!=par){
      ch++;
      dfs(adj[c][i],c);
    }
  if(ch<=1)
    return;
  else{
    int m1=0,m2=0;
    for(int i=0;i<adj[c].size();i++)
      if(adj[c][i]!=par){
	if(valid[adj[c][i]]>m2){
	  m1=m2;
	  m2=valid[adj[c][i]];
	}
	else if(valid[adj[c][i]]>m1)
	  m1=valid[adj[c][i]];
      }
    valid[c]+=m1+m2;
  }
}

void solve(){
  int n;
  cin>>n;
  int x,y;
  for(int i=1;i<=n;i++)
    adj[i].clear();
  for(int i=0;i<n-1;i++){
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  sol=n;
  for(int i=1;i<=n;i++){
    memset(valid,0,sizeof(valid));
    dfs(i,0);
    sol=min(sol,n-valid[i]);
  }
  cout<<sol<<endl;
}

int main(){
  int t,prob=1;
  cin>>t;
  while(t--){
    cout<<"Case #"<<prob++<<": ";
    solve();
  }
}

