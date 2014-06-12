#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int ct=0,off=0,ip;
  for(int i=0;i<n;i++){
    cin>>ip;
    if(!off && ip == -1 )
      ct++;
    else if(off && ip == -1)
      off--;
    else
      off+=ip;
  }
  cout<<ct;
}

