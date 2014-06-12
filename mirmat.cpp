#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> matrix[101];

int find(int end){
  //cout<<end;
  if(end%2==0)
    return end;
  int ok=1;
  for(int i=0;i<=end/2;i++)
    ok &= matrix[i]==matrix[end-i];
  if(ok) return find((end)/2);
  return end;
}

int main(){
  cin>>n>>m;
  int x;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
      cin>>x;
      matrix[i].push_back(x);
    }
  cout<<find(n-1)+1;
}
  
