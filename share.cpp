#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,st[50001];
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>st[i];
    int m=st[n-1],sol=0;
    for(int i=n-2;i>=0;i--){
      if(st[i]>m){
	m=st[i];
      }
      else
	sol+=m-st[i];
    }
    cout<<sol<<endl;
  }
}
