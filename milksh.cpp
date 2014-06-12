#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    vector<pair<int,int> > stat[2001];
    cout<<"Case #"<<i<<": ";
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
      int tt;
      cin>>tt;
      int x,y;
      while(tt--){
	cin>>x>>y;
	stat[i].push_back(make_pair(x-1,y));
      }
      sort(stat[i].begin(),stat[i].end());
    }
      int pre[2001]={0};
      int ok=1,f,ook=1;
      while(ok){
	ok=0;
	for(int i=0;i<m && ook;i++){
	  f=1;
	  for(int j=0;j<stat[i].size();j++){
	    if(pre[stat[i][j].first]==stat[i][j].second){
	      f=0;
	      break;
	    }
	    else if(stat[i][j].second==1){
	      pre[stat[i][j].first]=1;
	      f=0;
	      ok=1;
	      break;
	    }
	  }
	  if(f){
	    cout<<"IMPOSSIBLE";
	    ook=0;
	    break;
	  }
	}
      }
      if(ook)
	for(int i=0;i<n;i++)
	   cout<<pre[i]<<" ";
       cout<<endl;
  }
}
