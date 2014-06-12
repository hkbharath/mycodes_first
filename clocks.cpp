/*
ID : hegdebh1
PROG : clocks
LANG : C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
  ofstream op ("clocks.out");
  ifstream ip ("clocks.in");
  int moves[9][5]={0,1,3,4,-1,0,1,2,-1,-1,1,2,4,5,-1,0,3,6,-1,-1,1,3,4,5,7,2,5,8,-1,-1,3,4,6,7,-1,6,7,8,-1,-1,4,5,7,8,-1};
  int clock[9];
  for(int i=0;i<9;i++)
    ip>>clock[i];
  int tcl[9];
  vector<int> sol;
  int ps[9],ok;
  for(ps[0]=0;ps[0]<4;ps[0]++)
    for(ps[1]=0;ps[1]<4;ps[1]++)
      for(ps[2]=0;ps[2]<4;ps[2]++)
	for(ps[3]=0;ps[3]<4;ps[3]++)
	  for(ps[4]=0;ps[4]<4;ps[4]++)
	    for(ps[5]=0;ps[5]<4;ps[5]++)
	      for(ps[6]=0;ps[6]<4;ps[6]++)
		for(ps[7]=0;ps[7]<4;ps[7]++)
		  for(ps[8]=0;ps[8]<4;ps[8]++){
		    for(int i=0;i<9;i++)
		      tcl[i]=-1;
		    int ct = 0;
		    for(int i=0;i<9;i++){
		      ct +=ps[i];
		      for(int j=0;j<5;j++)
			if(moves[i][j]>=0){
			  if(tcl[moves[i][j]]==-1)tcl[moves[i][j]] = (clock[moves[i][j]]+3*ps[i])%12;
			  else tcl[moves[i][j]] = (tcl[moves[i][j]]+3*ps[i])%12;
			}
		    }
		    ok = 0;
		    sol.clear();
		    for(int i=0;i<9;i++){
		      ok |= tcl[i];
		      //op << tcl[i]<<endl;
		    }
		    ct--;
		    if(!ok){
		      for(int i=0;i<9;i++)
			for(int j=0;j<ps[i];j++){
			  if(ct--)
			    op<<i+1<<" ";
			  else
			    op<<i+1<<endl;
			}
		      return 0;
		    }
		  }
}

