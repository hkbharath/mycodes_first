#include <bits/stdc++.h>
using namespace std;
double mat[4][4],sol[4],cons[4],m3[3][3];

double det3(){
  double det=m3[0][0]*(m3[1][1] * m3[2][2] - m3[1][2] * m3[2][1]);
  det -= m3[0][1]*(m3[1][0] * m3[2][2] - m3[1][2] * m3[2][0]);
  det += m3[0][2]*(m3[1][0] * m3[2][1] - m3[2][0] * m3[1][1]);
  return det;
}

double detm(int x,int y){
  int r=0,c=0;
  for(int i=0;i<4;i++){
    c=0;
    for(int j=0;j<4;j++)
      if(i!=x && j!=y)
	m3[r][c++]=mat[i][j];
    r++;
  }
  return det3();
}

void mat_convert(){
  double imat[4][4],det=0;
  bool tog=1;
  for(int i=0;i<4;i++)
    for(int j=0;j<4;j++){
      imat[i][j]=detm(i,j)*tog?1:-1;
      tog!=tog;
     }
  for(int i=0;i<4;i++)
    det+=imat[0][i]*mat[0][i];
  for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
      mat[i][j]=imat[i][j]/det;
}


int main(){
  int n,t;
  int cv,ct;
  for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
      cin>>mat[i][j];
  mat_convert();
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++)
      cout<<mat[i][j]<<" ";
    cout<<endl;
  }

  cin>>n;
  while(n--){
    cin>>t;
    for(int i=0;i<4;i++){
      cin>>ct>>cv;
      for(int j=0;j<4;j++)
	mat[i][j]=pow(ct,j);
      cons[i]=cv;
    }
    mat_convert();
    memset(sol,0,sizeof(sol));
    for(int i=0;i<4;i++)
      for(int j=0;j<4;j++)
	sol[i]+=mat[i][j]*cons[j];
    double dist=0;
    for(int i=1;i<=4;i++)
      dist+=sol[i-1]*pow(t,i)/i;
    cout<<dist<<endl;
  }
}
