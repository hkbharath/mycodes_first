/**
 *	Author : hkbharath
 *	Problem : Rotate
 *	Lang : C++
 */	

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <map>
#include <cassert>
#include <queue>

#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=0;--a)
#define PB(a,b) a.push_back(b);
#define MP(a,b) make_pair(a,b);
#define MOD 1000000007

typedef long long int64;

using namespace std;

int n;
int brd[51][51],rbrd[51][51];

void ratate(){
	int i,ii,j,jj;
	for(i=0,ii=0;i<n ;i++,ii++){
		for(j=0,jj=n-1;j<n;j++,jj--)
			rbrd[i][j]=brd[jj][ii],printf("%d ",rbrd[i][j]);
		printf("\n");
	}
}


void solve(int tt){
	printf("Case #%d: ",tt);
	int m;
	char c;
	scanf("%d%d",&n,&m);
	getchar();
	FOR(i,0,n-1)FOR(j,0,n){
		scanf("%c",&c);
		if(c=='B')
			brd[i][j]=1;
		else if(c=='R')
			brd[i][j]=2;
		else
			brd[i][j]=0;
	}
	int r=0,b=0;
	rotate();
	FOR(i,0,n-1){
	FOR(j,0,n-1){
		int ok=1;
		for(int l=0;l<k && j+l<n;l++)ok&=(rbrd[i][j+l]==rbrd[i][j]);
		if(ok){ 
			if(rbrd[i][j]==1)b=1;
			else if(rbrd[i][j]==2)r=1;
			continue; 
		}
		ok=1;
		for(int l=0;l<k && i+l<n;l++)ok&=(rbrd[i+l][j]==rbrd[i][j]);
		if(ok){ 
			if(rbrd[i][j]==1)b=1;
			else if(rbrd[i][j]==2)r=1;
			continue; 
		}
		ok=1;
		for(int l=0;l<k && i+l<n && j+l<n;l++) ok&=(rbrd[i+l][j+l]==rbrd[i][j]);
		if(ok){ 
			if(rbrd[i][j]==1)b=1;
			else if(rbrd[i][j]==2)r=1;
			continue; 
		}		
	}}
	if(r&&b) printf("Both\n");
	else if(r) printf("Red\n");
	else if(b) printf("Blue\n");
	else printf("Neither\n");
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
