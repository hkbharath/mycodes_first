#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int b,ls,rs;
    cin>>b>>ls;
    cout<<sqrt(ls*ls-b*b)<<" "<<sqrt(b*b+ls*ls)<<endl;
  }
}
