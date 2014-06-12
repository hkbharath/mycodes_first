#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
int v[100001];
long long cst,sol,ssol,pcst;
int n,m,c[100005];
int s;
void trav(int u){
  if(u==s)
    return;

}

int main(){
  cin<<n;
  for(int i=0;i<n;i++)
    cin>>c[i];
  fsol=1;
  cin>>m;
  int a,b;
  for(int i=0;i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
  }
  for(int i=0;i<n;i++)
    if(!v[i]){
      pcst=0;
      sol=0;
      s=1;
      trav(i);
      cst+=pcst;
      fsol = (fsol*sol)%1000000007;
    }


