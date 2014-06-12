#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  struct pt{
    float z,x,y;
  }p;
  struct qd{
    pt p1,p2,p3,p4;
    int c,t;
  }q;
  vector<qd> objs;
  int canvas[320][240];
  memset(canvas,0,sizeof(canvas));
  for(int i=0;i<n;i++){
    cin>>q.t>>q.c;
    if(q.t==1){
      cin>>p.x>>p.y>>p.z;q.p1;
    objs.push_back(q);
  }
  sort(objs.begin(),objs.end(),comp);
  double sl;
  for(int i=0;i<n;i++){
    
  }
