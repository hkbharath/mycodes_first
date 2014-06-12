#include<bits/stdc++.h>
using namespace std;
int main(){
  int t=1000,n=1000;
  double ct=0;
  while(t--){
    int ar[n];
    for(int i=0;i<n;i++)
      ar[i]=i;
    for(int i=0;i<n;i++)
      swap(ar[i],ar[rand()%n]);
    for(int i=0;i<n;i++)
      if(ar[i]>i)ct+=1;
  }
  cout<<ct/1000<<endl;
}
