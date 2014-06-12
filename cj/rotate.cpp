#include<bits/stdc++.h>
using namespace std;
int n,k;
int bed[50][50];

inline bool see_hoz(int r,int c){
  int ch=0;
  for(int i=c;i<n;i++){
    if(bed[r][i]==bed[r][c]){
      ch++;
    }
    else break;
  }
  //cout<<"hoz "<<r<<" "<<c<<" "<<ch<<endl;
  if(ch>=k)
    return 1;
  return 0;
}

inline bool see_ver(int r,int c){
  int ch=0;
  for(int i=r;i<n;i++){
    if(bed[i][c]==bed[r][c])ch++;
    else break;
  }
  //cout<<"ver "<<r<<" "<<c<<" "<<ch<<endl;...
  if(ch>=k)
    return 1;
  return 0;
}

inline bool see_dia(int r,int c){
  int ch=0;
  int i=r,j=c;
  for(;i<n&&j<n;j++,i++){
    if(bed[r][c]==bed[i][j])ch++;
    else break;
  }
  for(i=r-1,j=c-1;i>=0&&j>=0;i--,j--){
    if(bed[i][j]==bed[r][c])ch++;
    else break;
  }
  if(ch>=k)
    return 1;
  ch=0;
  for(i=r,j=c;i<n && j>=0; i++,j--){
    if(bed[i][j]==bed[r][c])ch++;
    else break;
  }
  for(i=r-1,j=c+1;i>=0&&j<n;i--,j++){
    if(bed[i][j]==bed[r][c])ch++;
    else break;
  }
  if(ch>=k)
    return 1;
  return 0;
}


void solve(){
  char z[51][51];
  cin>>n>>k;
  for(int i=0;i<n;i++)
    cin>>z[i];
  int r=0,c=n-1;
  memset(bed,0,sizeof(bed));
  for(int i=0;i<n;i++){
    r=0;
    for(int j=0;j<n;j++){
      if(z[i][j]=='.')bed[r][c]=0;
      if(z[i][j]=='R')bed[r][c]=1;
      if(z[i][j]=='B')bed[r][c]=2;
      r++;
    }
    c--;
  }
  for(int i=0;i<n;i++)
    for(int j=n-1;j>=0;j--)
      if(bed[j][i])
	for(int k=j+1;k<n && !bed[k][i];k++)
	    swap(bed[k][i],bed[k-1][i]);
  r=0;
  for(int i=0;i<n && !r;i++)
    for(int j=0;j<n && !r;j++)
      if(bed[i][j]==1)
	if(see_hoz(i,j)||see_ver(i,j)||see_dia(i,j))
	  r=1;
  c=0;
  for(int i=0;i<n && !c;i++)
    for(int j=0;j<n && !c;j++)
      if(bed[i][j]==2 &&(see_hoz(i,j)||see_ver(i,j)||see_dia(i,j)))
	c=1;
  if(c && r)
    cout<<"Both"<<endl;
  else if(c)
    cout<<"Blue"<<endl;
  else if(r)
    cout<<"Red"<<endl;
  else
    cout<<"Neither"<<endl;
}

int main(){
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    cout<<"Case #"<<i<<": ";
    solve();
  }
}
