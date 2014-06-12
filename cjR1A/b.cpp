#include<bits/stdc++.h>
using namespace std;

vector<int> g[1001];
int del,sel;
int v[1001];
int child[1000];

void trav_ag(int i){
  v[i]=1;
  int ch=0;
  for(int j=0;j<g[i].size();j++)
    if(!v[g[i][j]])
      ch++;
  if(!ch)
    return;
  if(ch==1){
    del+=child[g[i][0]];
    sel=del;
    return;
  }
  int sm=INT_MAX,ssm=INT_MAX,psm,pssm;
  if(ch>=2){
    for(int j=0;j<g[i].size();j++)
      if(!v[g[i][j]]){
	sel=0;
	psm=0,sm=0;
	trav_ag(g[i][j]);
	if(sel>=sm){
	  ssm=sm;
	  pssm=psm;
	  sm=sel;
	  psm=j;
	}
	else if(sel>=ssm){
	  pssm=j;
	  ssm=sel;
	}
      }
    for(int j=0;j<g[i].size();j++)
      if(j!=psm && j!=pssm && !v[g[i][j]])
	del+=child[g[i][j]];
    trav_ag(g[i][psm]);
    trav_ag(g[i][pssm]);
  }
}

int trav(int i){
  v[i]=1;
  int ret=0;
    for(int j=0;j<g[i].size();j++)
      if(!v[g[i][j]])
	ret+=trav(g[i][j]);
    child[i]=ret;
    return ret;
}
void solve(){
  int n;
  cin>>n;
  int x,y;
  for(int i=0;i<=1000;i++)
    g[i].clear();
  for(int i=0;i<n-1;i++){
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  int sol=n,root=0;
  for(int i=1;i<n;i++){
    memset(child,0,sizeof(child));
    memset(v,0,sizeof(v));
    child[i]=trav(i);
    del=0;
    memset(v,0,sizeof(v));
    trav_ag(i);
    if(del<sol)root=i;
    sol=min(sol,del);
  }
  cout<<root<<endl;
  cout<<sol<<endl;
}

int main(){
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    cout<<"Case #"<<i<<": ";
    solve();
  }
}
