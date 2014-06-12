#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m,k;
  cin>>n>>m>>k;
  int dir=0;
  int i=1,j=1;
  int num = n*m-2*(k-1);
  if(num==1){
  	int zz=3;
  	cout<<"3 ";
  	while(zz--){
		  cout<<i<<" "<<j<<" ";
		  if(dir){
		    j--;
		    if(j==0)
		dir=0,j=1,i++;
		  }
		  else{
		    j++;
		    if(j==m+1)
		dir=1,j=m,i++;
		  }
		}
		cout<<endl;
		num=0;
  }
  while(k>1){
  	int zz=2;
  	cout<<"2 ";
  	while(zz--){
		  cout<<i<<" "<<j<<" ";
		  if(dir){
		    j--;
		    if(j==0)
		dir=0,j=1,i++;
		  }
		  else{
		    j++;
		    if(j==m+1)
		dir=1,j=m,i++;
		  }
		}
		cout<<endl;
    k--;
  }
  if(num)cout<<num<<" ";
  while(num){	
		  cout<<i<<" "<<j<<" ";
		  if(dir){
		    j--;
		    if(j==0)
		dir=0,j=1,i++;
		  }
		  else{
		    j++;
		    if(j==m+1)
		dir=1,j=m,i++;
		  }
    num--;
  }
}
