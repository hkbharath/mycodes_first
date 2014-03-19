/**
 *	Author : hkbharath
 *	Problem :
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

void solve(int tt){
	int n;
	scanf("%d",&n);
	int alph[27]={0},ct=0;
	char pap[n+1][n+1];
	FOR(i,0,n-1){
		scanf("%s",pap[i]);
		FOR(j,0,n-1)
			if(alph[pap[i][j]-'a']++ == 0)
				ct++;
	}
	if(ct>2) printf("NO\n");
	else{
		int ok=1;
		for(int i=1;i<n;i++)			
			ok&=(pap[i][i]==pap[0][0]);
		if(!ok){ printf("NO"); return;}
		for(int i=1;i<n;i++)
			ok&=(pap[i][n-i-1]==pap[0][n-1]);
		if(!ok){ printf("NO"); return;}
		printf("YES");
	}
}

int main(){
	int t,it;
//	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
