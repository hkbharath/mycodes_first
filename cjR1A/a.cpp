#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,l;
  vector<string> av,req,xreq;
  cin>>n>>l;
  string ip;
  for(int i=0;i<n;i++){
    cin>>ip;
    av.push_back(ip);
  }
  for(int i=0;i<n;i++){
    cin>>ip;
    req.push_back(ip);
    xreq.push_back(ip);
  }
  int sol=0;
  for(int i=0;i<l;i++){
    int avo=0,avz=0,reqo=0,reqz=0;
    for(int j=0;j<n;j++){
      if(av[j][i]=='0')avz++;
      else avo++;
      if(req[j][i]=='0')reqz++;
      else reqo++;
    }

    if(avo==reqo)continue;
    if(avo==reqz){
      for(int j=0;j<n;j++)
	av[j][i]='1'-av[j][i]+'0';
      sol++;
    }
    else{
      cout<<"NOT POSSIBLE"<<endl;
      return;
    }
  }
  int pos=n;
  for(int i=0;i<n;i++){
    pos=n;
    for(int j=0;j<req.size();j++)
      if(av[0]==req[j]){
	pos=j;
	break;
      }
    //cout<<pos<<" "<<av[0]<<endl;
    if(pos==n){
      cout<<"NOT POSSIBLE"<<endl;
      return;
    }
    req.erase(req.begin()+pos);
    av.erase(av.begin());
  }
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
