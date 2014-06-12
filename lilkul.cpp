#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<pair<int,int> > l;
  string s;
  int st=0,end=0;
  for(int i=0;i<n;i++){
    cin>>s;
    int j=0;
    int h=0,m=0,f=10,fl=1;
    while(j<11){
      if(s[j]=='-'){
	st = h*60+m;
	h=m=0;
	f=10;
	fl=1;
      }
      else if(s[j]==':')
	f=10,fl=0;
      else if(fl){
	h=h+f*(s[j]-'0');
	f/=10;
      }
      else{
	m=m+f*(s[j]-'0');
	f/=10;
      }
      j++;
    //  cout<<h<<" "<<m<<endl;
    }
    end = h*60+m;
    l.push_back(make_pair(st,end));
  }
  sort(l.begin(),l.end());  
  for(int i=1;i<n;i++){
   // cout<<l[i].first<<" "<<l[i].second;
    if(l[i].first < l[i-1].second ){
      cout<<"Will need a moderator!"<<endl;
      return 0;
    }
  }
  cout<<"Who needs a moderator?"<<endl;
}
