/**
 *	Author : hkbharath
 *	Problem : CD_ROM Dwite
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
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(a,b) a.push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007


using namespace std;

typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

void solve(int tt){
	int dp[10001],n,cd,cap;
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	scanf("%d%d",&cap,&n);
	LOOP(n){
		scanf("%d",&cd);
		RFOR(i,cap,cd){
			if(dp[i-cd])dp[i]=1;
		}
	}
	RFOR(i,cap,0)
		if(dp[i]){printf("%d\n",i);break;}
}

int main(){
	int t=5,it;
	for(it=1;it<=t;it++)
		solve(it);
}
