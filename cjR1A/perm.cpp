#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,prob=1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int x,ct=0;
    for(int i=0;i<n;i++){
      cin>>x;
      if(x>i)ct++;
    }
    cout<<"Case #"<<prob++<<": ";
    if(ct>514)
      cout<<"BAD"<<endl;
    else
      cout<<"GOOD"<<endl;
  }
}

