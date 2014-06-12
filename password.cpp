#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin>>s;
  bool a=0,b=0,c=0,d=0;
  if(s.length()<5)a=1;
  int n=s.length();
  for(int i=0;i<n;i++){
    if(s[i]>='A' && s[i]<='Z'){
      b=1;
    }
    if(s[i]>='a' && s[i]<='z')
      c=1;
    if(s[i]>='0' && s[i]<='9')
      d=1;
  }
  if(a && b && c && d)cout<<"Correct"<<endl;
  else cout<<"Too weak"<<endl;

}

