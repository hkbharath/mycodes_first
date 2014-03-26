/**
 *	Author : hkbharath
 *	Problem : https://www.hackerrank.com/contests/codex-6-0/challenges/mario-cart-aka-shortest-run
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

int dp[1000001];

void solve(int tt){
	int n,sol=0;
	scanf("%d",&n);
	printf("%d\n",dp[n]);
}

int main(){
	int t,it;
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	int x=1000001;
	FOR(i,4,1000000){
		x=1000001;
		if(i%3)x=min(x,dp[i/3]);
		if(i%2)x=min(x,dp[i/2]);
		x=min(x,dp[i-1]);
		dp[i]=x+1;
	}
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
