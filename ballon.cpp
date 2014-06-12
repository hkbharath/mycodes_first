#include <bits/stdc++.h>

using namespace std;

int main(){
  int c,r;
  long long fact[1000001];
  fact[0]=1;
  for(int i=0;i<1000001;i++)fact[i]=i*fact[i-1];
  while(1){
    cin>>c>>r;
    if(c==0 && r==0)return 0;
  	long long sol=(((c+1)*c)/2)*((r*(r+1)/2));
  	sol+=fact[c-1]*fact[r-1];
  	cout<<sol<<endl;
  }
}
