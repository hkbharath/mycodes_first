#include<bits/stdc++.h>
using namespace std;
int n,m,k,kk=0;
int ar[101][101];
int cc[101][101];
int kkk;
vector<pair<int,int> > ccc[1001];
int num;
vector<pair<int,int> > ref;


void fill(int x,int y){
  if(x<0 || y<0 ||x>=n ||y>=m)return;
  cc[x][y]=kk;
  ccc[kk].push_back(make_pair(x,y));
  if(x+1<n && ar[x+1][y]==ar[x][y])
    fill(x+1,y);
  if(x-1>=0 && ar[x-1][y]==ar[x][y])
    fill(x-1,y);
  if(y+1<m && ar[x][y+1]==ar[x][y])
    fill(x,y+1);
  if(y-1>=0 && ar[x][y-1]==ar[x][y])
    fill(x,y-1);
}

int check(){
  for(int i=0;i<1001;i++){
    int mx=0,my=0,mnx=n,mny=m;
    for(int j=0;j<ccc[i].size();j++){
      mx=max(mx,ccc[i][j].first);
      my=max(my,ccc[i][j].second);
      mnx=min(mx,ccc[i][j].first);
      mny=min(my,ccc[i][j].second);
    }
    if((mx-mny+1)*(my-mny+1)==ccc[i].size())
      return 1;
  }
  return 0;
}

void add(){

  int idx=ref[0].second;
  if(ref[0].first>k){
    k=0;
    return;
  }
  for(int i=0;i<ccc[idx].size();i++){
    int x=ccc[idx][i].first;
    int y=ccc[idx][i].second;
    ar[x][y]=!ar[x][y];
  }
  k-=ccc[idx].size();
  kkk+=ccc[idx].size();
  ref.erase(ref.begin()); 

}

int main(){
  cin>>n>>m>>k;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>ar[i][j];
  kkk=0;
  while(k){
  kk=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      if(!cc[i][j]){
	kk++;num=0;
	fill(i,j);
      }
  for(int i=0;i<1001;i++)
    if(ccc[i].size())
      ref.push_back(make_pair(ccc[i].size(),i));
  sort(ref.begin(),ref.end());
    if(check()){
      cout<<kkk<<endl;
      return 0;
    }
    add();
    memset(cc,0,sizeof(cc));
  }
}
