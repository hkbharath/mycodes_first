#include <bits/stdc++.h>
using namespace std;

char pt[51][51];
int r,c;
int ct;

void put_slash(int x,int y){
  if(pt[x][y]!='#')return;
  int ax=x+1,ay=y;
  int bx=x,by=y+1;
  int cx=x+1,cy=y+1;
  if(ax<r && ay<c && ax>=0 && ay>=0 && bx<r && by<c && bx>=0 && by>=0 && cx<r && cy<c && pt[ax][ay]==pt[x][y] && pt[bx][by]==pt[x][y] && pt[cx][cy]==pt[x][y] ){
    pt[x][y]='/';
    pt[ax][ay]='\\';
    pt[bx][by]='\\';
    pt[cx][cy]='/';
    ct-=4;
  }
}


void solve(){
  cin>>r>>c;
  ct=0;
  for(int i=0;i<r;i++){
    cin>>pt[i];
    for(int j=0;j<c;j++)
      if(pt[i][j]=='#')
	ct++;
  }
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      put_slash(i,j);
  if(ct){
    cout<<"Impossible"<<endl;
    return;
  }
  for(int i=0;i<r;i++)
    cout<<pt[i]<<endl;
}



int main(){
  int t,prob=1;
  cin>>t;
  while(t--){
    cout<<"Case #"<<prob++<<":\n";
    solve();
  }
}
