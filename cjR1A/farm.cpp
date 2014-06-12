#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,l;
  cin>>n>>l;
  int ans=l+1;
  vector<string> brd,div;
  string obrd[151],odiv[151];
  for(int i=0;i<n;i++)
    cin>>obrd[i];
  for(int i=0;i<n;i++){
    cin>>odiv[i];
    div.push_back(odiv[i]);
  }
  int shift;
  sort(div.begin(),div.end());
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      string cor(l,'0');
      shift=0;
      for(int k=0;k<l;k++){
	if(obrd[i][k]!=div[0][k]){
	  cor[k]=('1'-obrd[j][k]+'0');
	  shift++;
	}
	else
	  cor[k]=obrd[j][k];
      }
      brd.push_back(cor);
    }
    sort(brd.begin(),brd.end());
    if(brd==div)
      ans=min(ans,shift);
    brd.clear();
  }
  if(ans<=l)
    cout<<ans<<endl;
  else
    cout<<"NOT POSSIBLE"<<endl;
}
int main(){
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    cout<<"Case #"<<i<<": ";
    solve();
  }
}
