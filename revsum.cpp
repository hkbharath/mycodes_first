#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string a,b,sol;
    int su,c=0;
    cin>>a>>b;
    sol="";
    int i=0;
    while(i<a.size() && i<b.size()){
      su = a[i]+b[i]+c-2*'0';
      sol += (char)(su%10+'0');
      c=su/10;
      i++;
    }
    while(i<a.size()){
      su = a[i]-'0'+c;
      sol += (char)(su%10+'0');
      c=su/10;
      i++;
    }
    while(i<b.size()){
      su = b[i]-'0'+c;
      sol += (char)(su%10+'0');
      c = su/10;
      i++;
    }
    if(c)
      sol+=(char)(c+'0');
    while(!sol.empty()){
      if(sol[0]=='0')
	sol.erase(sol.begin());
      else
	break;
    }
    if(sol.empty())
      sol="0";
    cout<<sol<<endl;
  }
}
